Str KeyToStr(KB_KEY k)
{
   switch(k)
   {
      case KB_NONE: return "none";

      case KB_0: return "0";
      case KB_1: return "1";
      case KB_2: return "2";
      case KB_3: return "3";
      case KB_4: return "4";
      case KB_5: return "5";
      case KB_6: return "6";
      case KB_7: return "7";
      case KB_8: return "8";
      case KB_9: return "9";

      case KB_A: return "A";
      case KB_B: return "B";
      case KB_C: return "C";
      case KB_D: return "D";
      case KB_E: return "E";
      case KB_F: return "F";
      case KB_G: return "G";
      case KB_H: return "H";
      case KB_I: return "I";
      case KB_J: return "J";
      case KB_K: return "K";
      case KB_L: return "L";
      case KB_M: return "M";
      case KB_N: return "N";
      case KB_O: return "O";
      case KB_P: return "P";
      case KB_Q: return "Q";
      case KB_R: return "R";
      case KB_S: return "S";
      case KB_T: return "T";
      case KB_U: return "U";
      case KB_V: return "V";
      case KB_W: return "W";
      case KB_X: return "X";
      case KB_Y: return "Y";
      case KB_Z: return "Z";

      case KB_F1 : return "F1";   
      case KB_F2 : return "F2";   
      case KB_F3 : return "F3";   
      case KB_F4 : return "F4";   
      case KB_F5 : return "F5";   
      case KB_F6 : return "F6";   
      case KB_F7 : return "F7";   
      case KB_F8 : return "F8";   
      case KB_F9 : return "F9";   
      case KB_F10: return "F10";  
      case KB_F11: return "F11";  
      case KB_F12: return "F12";  

      case KB_ESC  : return "Escape";  
      case KB_ENTER: return "Enter";  
      case KB_SPACE: return "Space";  
      case KB_BACK : return "Backspace";  
      case KB_TAB  : return "Tab";  

      case KB_LCTRL : return "Left Control";  
      case KB_RCTRL : return "Right Control";  
      case KB_LSHIFT: return "Left Shift";  
      case KB_RSHIFT: return "Right Shift";  
      case KB_LALT  : return "Left Alt";  
      case KB_RALT  : return "Right Alt";  
      case KB_LWIN  : return "Left Win";  
      case KB_RWIN  : return "Right Win";  
      case KB_MENU  : return "Menu";  
      case KB_FIND  : return "Find";  

      case KB_LEFT : return "Left";  
      case KB_RIGHT: return "Right";  
      case KB_UP   : return "Up";  
      case KB_DOWN : return "Down";  

      case KB_INS : return "Insert";  
      case KB_DEL : return "Delete";  
      case KB_HOME: return "Home";  
      case KB_END : return "End";  
      case KB_PGUP: return "Page Up";  
      case KB_PGDN: return "Page Down";  

      case KB_SUB       : return "-";  
      case KB_EQUAL     : return "=";  
      case KB_LBRACKET  : return "[";  
      case KB_RBRACKET  : return "]";  
      case KB_SEMICOLON : return ";";  
      case KB_APOSTROPHE: return "'";  
      case KB_COMMA     : return ",";  
      case KB_DOT       : return ".";  
      case KB_SLASH     : return "/";  
      case KB_BACKSLASH : return "\\";  
      case KB_TILDE     : return "~";  

      case KB_NPDIV  : return "Numpad /";  
      case KB_NPMUL  : return "Numpad *";  
      case KB_NPSUB  : return "Numpad -";  
      case KB_NPADD  : return "Numpad +";  
      case KB_NPDEL  : return "Numpad Del";  
      //case KB_NPENTER: return "Numpad Enter";   // it's the same as normal enter

      case KB_NP0: return "Numpad 0";  
      case KB_NP1: return "Numpad 1";  
      case KB_NP2: return "Numpad 2";  
      case KB_NP3: return "Numpad 3";  
      case KB_NP4: return "Numpad 4";  
      case KB_NP5: return "Numpad 5";  
      case KB_NP6: return "Numpad 6";  
      case KB_NP7: return "Numpad 7";  
      case KB_NP8: return "Numpad 8";  
      case KB_NP9: return "Numpad 9";  

      case KB_CAPS  : return "Caps Lock";  
      case KB_NUM   : return "Num Lock";  
      case KB_SCROLL: return "Scroll Lock";  
      case KB_PRINT : return "Print Screen";  
      case KB_PAUSE : return "Pause";  

      case KB_NAV_BACK   : return "Navigate backward";  
      case KB_NAV_FORWARD: return "Navigate forward";  

      case KB_VOL_DOWN: return "Volume Down";  
      case KB_VOL_UP  : return "Volume Up";  
      case KB_VOL_MUTE: return "Mute";  

      case KB_MEDIA_PREV: return "Media Previous";  
      case KB_MEDIA_NEXT: return "Media Next";  
      case KB_MEDIA_PLAY: return "Media Play/Pause";  
      case KB_MEDIA_STOP: return "Media Stop";  

      case KB_ZOOM_IN : return "Zoom in";  
      case KB_ZOOM_OUT: return "Zoom out";  
      
      default: return "none";
   }
}
      
KB_KEY KeyFromStr(C Str& s)
{
   if (s == "none") return KB_NONE;

   if (s == "0") return KB_0;
   if (s == "1") return KB_1;
   if (s == "2") return KB_2;
   if (s == "3") return KB_3;
   if (s == "4") return KB_4;
   if (s == "5") return KB_5;
   if (s == "6") return KB_6;
   if (s == "7") return KB_7;
   if (s == "8") return KB_8;
   if (s == "9") return KB_9;

   if (s == "A") return KB_A;
   if (s == "B") return KB_B;
   if (s == "C") return KB_C;
   if (s == "D") return KB_D;
   if (s == "E") return KB_E;
   if (s == "F") return KB_F;
   if (s == "G") return KB_G;
   if (s == "H") return KB_H;
   if (s == "I") return KB_I;
   if (s == "J") return KB_J;
   if (s == "K") return KB_K;
   if (s == "L") return KB_L;
   if (s == "M") return KB_M;
   if (s == "N") return KB_N;
   if (s == "O") return KB_O;
   if (s == "P") return KB_P;
   if (s == "Q") return KB_Q;
   if (s == "R") return KB_R;
   if (s == "S") return KB_S;
   if (s == "T") return KB_T;
   if (s == "U") return KB_U;
   if (s == "V") return KB_V;
   if (s == "W") return KB_W;
   if (s == "X") return KB_X;
   if (s == "Y") return KB_Y;
   if (s == "Z") return KB_Z;

   if (s == "F1") return KB_F1;
   if (s == "F2") return KB_F2;
   if (s == "F3") return KB_F3;
   if (s == "F4") return KB_F4;
   if (s == "F5") return KB_F5;
   if (s == "F6") return KB_F6;
   if (s == "F7") return KB_F7;
   if (s == "F8") return KB_F8;
   if (s == "F9") return KB_F9;
   if (s == "F10") return KB_F10;
   if (s == "F11") return KB_F11;
   if (s == "F12") return KB_F12;

   if (s == "Escape") return KB_ESC;
   if (s == "Enter") return KB_ENTER;
   if (s == "Space") return KB_SPACE;
   if (s == "Backspace") return KB_BACK;
   if (s == "Tab") return KB_TAB;

   if (s == "Left Control") return KB_LCTRL;
   if (s == "Right Control") return KB_RCTRL;
   if (s == "Left Shift") return KB_LSHIFT;
   if (s == "Right Shift") return KB_RSHIFT;
   if (s == "Left Alt") return KB_LALT;
   if (s == "Right Alt") return KB_RALT;
   if (s == "Left Win") return KB_LWIN;
   if (s == "Right Win") return KB_RWIN;
   if (s == "Menu") return KB_MENU;
   if (s == "Find") return KB_FIND;

   if (s == "Left") return KB_LEFT;
   if (s == "Right") return KB_RIGHT;
   if (s == "Up") return KB_UP;
   if (s == "Down") return KB_DOWN;

   if (s == "Insert") return KB_INS;
   if (s == "Delete") return KB_DEL;
   if (s == "Home") return KB_HOME;
   if (s == "End") return KB_END;
   if (s == "Page Up") return KB_PGUP;
   if (s == "Page Down") return KB_PGDN;

   if (s == "-") return KB_SUB;
   if (s == "=") return KB_EQUAL;
   if (s == "[") return KB_LBRACKET;
   if (s == "]") return KB_RBRACKET;
   if (s == ";") return KB_SEMICOLON;
   if (s == "'") return KB_APOSTROPHE;
   if (s == ",") return KB_COMMA;
   if (s == ".") return KB_DOT;
   if (s == "/") return KB_SLASH;
   if (s == "\\") return KB_BACKSLASH;
   if (s == "~") return KB_TILDE;

   if (s == "Numpad /") return KB_NPDIV;
   if (s == "Numpad *") return KB_NPMUL;
   if (s == "Numpad -") return KB_NPSUB;
   if (s == "Numpad +") return KB_NPADD;
   if (s == "Numpad Del") return KB_NPDEL;
   if (s == "Numpad Enter") return KB_NPENTER;

   if (s == "Numpad 0") return KB_NP0;
   if (s == "Numpad 1") return KB_NP1;
   if (s == "Numpad 2") return KB_NP2;
   if (s == "Numpad 3") return KB_NP3;
   if (s == "Numpad 4") return KB_NP4;
   if (s == "Numpad 5") return KB_NP5;
   if (s == "Numpad 6") return KB_NP6;
   if (s == "Numpad 7") return KB_NP7;
   if (s == "Numpad 8") return KB_NP8;
   if (s == "Numpad 9") return KB_NP9;

   if (s == "Caps Lock") return KB_CAPS;
   if (s == "Num Lock") return KB_NUM;
   if (s == "Scroll Lock") return KB_SCROLL;
   if (s == "Print Screen") return KB_PRINT;
   if (s == "Pause") return KB_PAUSE;

   if (s == "Navigate backward") return KB_NAV_BACK;
   if (s == "Navigate forward") return KB_NAV_FORWARD;

   if (s == "Volume Down") return KB_VOL_DOWN;
   if (s == "Volume Up") return KB_VOL_UP;
   if (s == "Mute") return KB_VOL_MUTE;

   if (s == "Media Previous") return KB_MEDIA_PREV;
   if (s == "Media Next") return KB_MEDIA_NEXT;
   if (s == "Media Play/Pause") return KB_MEDIA_PLAY;
   if (s == "Media Stop") return KB_MEDIA_STOP;

   if (s == "Zoom in") return KB_ZOOM_IN;
   if (s == "Zoom out") return KB_ZOOM_OUT;

   return KB_NONE; // Default if not found
}
