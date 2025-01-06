   
   template<typename Type>
   struct StateFSM
   {
      virtual ~StateFSM() {}

      virtual void Enter(Type* entity) = 0;
      virtual void Exit (Type* entity) = 0;
      
      virtual void Execute(Type* entity) = 0;
   };
   
   template<typename Type>
   class FSM
   {
   public:
      
      FSM(Type* inOwner) : owner(inOwner) { }
      
      void SetCurrentState (StateFSM<Type>* s)  { currentState  = s; }
      void SetPreviousState(StateFSM<Type>* s)  { previousState = s; }
      void SetGlobalState  (StateFSM<Type>* s)  { globalState   = s; }
      
      void Update() const
      {
         if(globalState)   globalState .Execute(owner);
         if(currentState)  currentState.Execute(owner);
      }
      
      void ChangeState(StateFSM<Type>* newState)
      {
         DYNAMIC_ASSERT(newState, "FSM trying to change to an invalid state");
         
         previousState = currentState;
         
         currentState.Exit(owner);
         currentState = newState;
         currentState.Enter(owner);
      }
      
      void RevertToPreviousState()
      {
         ChangeState(previousState);
      }
      
      StateFSM<Type>* GetCurrentState () const { return currentState ; }
      StateFSM<Type>* GetPreviousState() const { return previousState; }
      StateFSM<Type>* GetGlobalState  () const { return globalState  ; }
      
   private:
      
      Type*             owner          = null;
      StateFSM<Type>   *currentState   = null,
                       *previousState  = null,
                       *globalState    = null;
      
   };