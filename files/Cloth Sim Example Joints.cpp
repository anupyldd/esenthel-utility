/******************************************************************************/
void InitPre()
{
   INIT();
   Ms.hide();
   Ms.clip(null, 1);
   App.flag=APP_MINIMIZABLE|APP_MAXIMIZABLE|APP_RESIZABLE;
}

Actor ground;
Memc<Memc<Actor>> actors;
Memc<Joint> joints;
Memc<Memc<Edge>> edges;  // for debug drawing of joints
Memc<Actor> projectiles;

const int xNum = 10;
const int yNum = 10;

bool Init()
{
   Cam.dist =4;
   Cam.pitch=-0.2f;

   Physics.create();
   ground .create(Box_U(30, 1, 15, Vec(0, -1,0)), 0);

   // create a grid of actors
   FREPD(x, xNum)
   {
      actors.New();
      
      FREPD(y, yNum)
      {
         actors.last().New()
            .create(Ball(0.1f, Vec(x, y, 0)), ((y == yNum - 1) ? 0 : 1));
      }
   }
   
   FREPAD(x, actors)
   {
      edges.New();
      
      FREPAD(y, actors[x])
      {
         if(y != yNum - 1) 
         {
            Actor& ca = actors[x][y];     // current actor
            Actor& na = actors[x][y+1];   // next actor
            
            joints.New().create(ca, &na);
            edges[x].New().set(ca.pos(), na.pos());
         }
         if(x != xNum - 1)
         {
            Actor& ca = actors[x][y];
            Actor& na = actors[x+1][y];
            
            joints.New().create(ca, &na);
            edges[x].New().set(ca.pos(), na.pos());
         }
      }
   }
   
   
   
   return true;
}
void Shut()
{
}
/******************************************************************************/

float speed = 0.5f; // projectile speed

bool Update()
{
   if(Kb.bp(KB_ESC))return false;
   
   Cam.transformByMouse(0.1f, 30, CAMH_ZOOM|(Ms.b(1)?CAMH_MOVE:CAMH_ROT));
   Physics.startSimulation().stopSimulation();
   
   if(Kb.b(KB_UP)) speed += 0.01f;
   if(Kb.b(KB_DOWN)) speed -= 0.01f;
   if(Kb.bp(KB_SPACE))
   {
      projectiles.New()
         .create(Ball(1, Cam.matrix.pos))
         .vel(Vec(Cam.at - Cam.matrix.pos)*speed);
   }
   
   // update edges
   /*
   edges.clear();
   FREPAD(x, actors)
   {
      edges.New();
      FREPAD(y, actors[x])
      {
         if(y != yNum - 1) 
         {
            Actor& ca = actors[x][y];
            Actor& na = actors[x][y+1];
            edges[x].New().set(ca.pos(), na.pos());
         }
         if(x != xNum - 1)
         {
            Actor& ca = actors[x][y];
            Actor& na = actors[x+1][y];
            edges[x].New().set(ca.pos(), na.pos());
         }
      }
   }
   */
   
   return true;
}
/******************************************************************************/
Mesh mesh;

void CreateMesh()
{
   mesh.parts.clear();
   
   FREPAD(x, actors)
   {
      FREPAD(y, actors[x])
      {
         if(x >= xNum - 1 || y >= yNum - 1) continue;
         
         Vec& p = actors[x][y].pos();
         Vec& pr = actors[x+1][y].pos();
         Vec& pu = actors[x][y+1].pos();
         Vec& pru = actors[x+1][y+1].pos();
         
         MeshPart &part = mesh.parts.New();
         MeshBase &base = part.base;
         
         base.create(4, 0, 2, 0, VTX_UV); 
         base.vtx.pos(0).set(p.x, p.y, p.z);
         base.vtx.pos(1).set(pr.x, pr.y, pr.z);
         base.vtx.pos(2).set(pu.x, pu.y, pu.z);
         base.vtx.pos(3).set(pru.x, pru.y, pru.z); 
         base.vtx.uv(0).set(-1, -1   ); 
         base.vtx.uv(1).set( 1, -1   ); 
         base.vtx.uv(2).set( -1, 1   ); 
         base.vtx.uv(3).set( 1,1   ); 
         base.tri.ind(0).set(0, 2, 1);
         base.tri.ind (1).set(1, 2, 3);
         base.setNormals(); 
      }
   }
   mesh.material(UID(3129549010, 1114348250, 3909324949, 3742823622)); 
   mesh.setAutoTanBin(); 
   mesh.setRender(); 
   mesh.setBox(); 
}

void Render()
{
   switch(Renderer())
   {
      case RM_PREPARE:
      {
         mesh.draw(MatrixIdentity);
         LightDir(Cam.matrix.z).add();
      }break;
   }
}

void Draw()
{
   D.clear();
   
   CreateMesh();
   Renderer(Render);

   Physics.draw();
   
   /* draw edges
   FREPAD(x, edges)
   FREPAD(y, edges) 
      edges[x][y].draw(RED, 0.005f);
   */  
     
   D.text(0.7f, 0.7f, S+"speed: "+speed);
}
/******************************************************************************/

