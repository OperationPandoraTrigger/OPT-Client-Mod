 class MFD
  {
   class AirplaneHUD
   {
    topLeft = "HUD_top_left";
    topRight = "HUD_top_right";
    bottomLeft = "HUD_bottom_left";
    borderLeft = 0;
    borderRight = 0;
    borderTop = 0;
    borderBottom = 0;
    color[] = {1,1,1,1};
    helmetMountedDisplay = 1;
    helmetPosition[] = {-0.025,0.025,0.1};
    helmetRight[] = {0.05,0,0};
    helmetDown[] = {0,-0.05,0};
    class Bones
    {
     class PlaneW
     {
      type = "fixed";
      pos[] = {0.5,0.572};
     };
     class WeaponAim
     {
      type = "vector";
      source = "weapon";
      pos0[] = {0.5,0.5};
      pos10[] = {0.847,0.845};
     };
     class ForwardVector
     {
      type = "vector";
      source = "forward";
      pos0[] = {0,0};
      pos10[] = {0.347,0.345};
     };
     class VelocityVector
     {
      type = "vector";
      source = "velocityToView";
      pos0[] = {0.5,0.5};
      pos10[] = {0.847,0.845};
     };
     class HorizonVector
     {
      type = "horizon";
      pos0[] = {0.5,0.572};
      pos10[] = {0.990727,1.0599};
      angle = 0;
     };
     class VerticalSpeedBone
     {
      type = "linear";
      source = "vspeed";
      sourceScale = 1;
      min = -15;
      max = 15;
      minPos[] = {0,-0.09};
      maxPos[] = {0,0.09};
     };
    };
    class Draw
    {
     alpha = 1;
     color[] = {0,1,0.3};
     condition = "on";
     class Static
     {
      type = "line";
      width = 4;
      points[] = {
       { 
        { 0.5,0.115 },1 },
       { 
        { 0.5,0.135 },1 },
       {  },
       { 
        { 0.81,0.5 },1 },
       { 
        { 0.83,0.5 },1 }};
     };
     class VelocityLine
     {
      type = "line";
      width = 4;
      points[] = {
       { "PlaneW",1 },
       { "VelocityVector",1 }};
     };
     class CollectiveGroup
     {
      condition = "simulRTD";
      class CollectiveText
      {
       type = "text";
       source = "static";
       text = "%";
       align = "right";
       scale = 1;
       pos[] = {
        { 0.2,0.2 },1};
       right[] = {
        { 0.26,0.2 },1};
       down[] = {
        { 0.2,0.25 },1};
      };
      class CollectiveNumber
      {
       type = "text";
       source = "rtdCollective";
       sourceScale = 100;
       align = "left";
       scale = 1;
       pos[] = {
        { 0.2,0.2 },1};
       right[] = {
        { 0.26,0.2 },1};
       down[] = {
        { 0.2,0.25 },1};
      };
     };
     class SpeedNumber
     {
      type = "text";
      source = "speed";
      sourceScale = 3.6;
      align = "right";
      scale = 1;
      pos[] = {
       { 0.2,"0.50 - 0.025" },1};
      right[] = {
       { 0.26,"0.50 - 0.025" },1};
      down[] = {
       { 0.2,"0.50 + 0.025" },1};
     };
     class AltNumber
     {
      type = "text";
      source = "altitudeAGL";
      sourceScale = 1;
      align = "left";
      scale = 1;
      pos[] = {
       { 0.8,"0.50 - 0.025" },1};
      right[] = {
       { 0.86,"0.50 - 0.025" },1};
      down[] = {
       { 0.8,"0.50 + 0.025" },1};
     };
     class Weapons
     {
      type = "text";
      source = "weapon";
      sourceScale = 1;
      align = "right";
      scale = 1;
      pos[] = {
       { 0,0.9 },1};
      right[] = {
       { 0.06,0.9 },1};
      down[] = {
       { 0,0.95 },1};
     };
     class Ammo
     {
      type = "text";
      source = "ammo";
      sourceScale = 1;
      align = "center";
      scale = 1;
      pos[] = {
       { 0.5,0.65 },1};
      right[] = {
       { 0.56,0.65 },1};
      down[] = {
       { 0.5,0.7 },1};
     };
     class AltScale
     {
      type = "scale";
      horizontal = 0;
      source = "altitudeAGL";
      sourceScale = 1;
      min = 0;
      width = 4;
      top = "0.50 + 0.20";
      center = 0.5;
      bottom = "0.50 - 0.25";
      lineXleft = 0.835;
      lineYright = 0.845;
      lineXleftMajor = 0.835;
      lineYrightMajor = 0.855;
      majorLineEach = 5;
      numberEach = 5;
      step = 20;
      stepSize = "(0.25 + 0.20) / 15";
      align = "right";
      scale = 1;
      pos[] = {0.87,"0.50 + 0.20 - 0.025"};
      right[] = {0.93,"0.50 + 0.20 - 0.025"};
      down[] = {0.87,"0.50 + 0.20 + 0.025"};
     };
     class VerticalSpeedScale
     {
      type = "line";
      width = 4;
      points[] = {
       { "VerticalSpeedBone",
        { 0.86,0.84 },1 },
       { "VerticalSpeedBone",
        { 0.87,0.85 },1 },
       { "VerticalSpeedBone",
        { 0.86,0.86 },1 },
       {  },
       { 
        { 0.885,0.76 },1 },
       { 
        { 0.895,0.76 },1 },
       {  },
       { 
        { 0.885,0.79 },1 },
       { 
        { 0.895,0.79 },1 },
       {  },
       { 
        { 0.885,0.82 },1 },
       { 
        { 0.895,0.82 },1 },
       {  },
       { 
        { 0.885,0.85 },1 },
       { 
        { 0.905,0.85 },1 },
       {  },
       { 
        { 0.885,0.88 },1 },
       { 
        { 0.895,0.88 },1 },
       {  },
       { 
        { 0.885,0.91 },1 },
       { 
        { 0.895,0.91 },1 },
       {  },
       { 
        { 0.885,0.94 },1 },
       { 
        { 0.895,0.94 },1 }};
     };
     class VspeedNumberStaticP15
     {
      type = "text";
      source = "static";
      text = 15;
      scale = 1;
      sourceScale = 1;
      align = "right";
      pos[] = {
       { 0.91,0.73 },1};
      right[] = {
       { "0.91 + 0.06",0.73 },1};
      down[] = {
       { 0.91,"0.73 + 0.05" },1};
     };
     class VspeedNumberStaticM15
     {
      type = "text";
      source = "static";
      text = -15;
      scale = 1;
      sourceScale = 1;
      align = "right";
      pos[] = {
       { 0.91,0.91 },1};
      right[] = {
       { "0.91 + 0.06",0.91 },1};
      down[] = {
       { 0.91,"0.91 + 0.05" },1};
     };
     class HeadingScale
     {
      type = "scale";
      horizontal = 1;
      source = "heading";
      sourceScale = 1;
      width = 4;
      top = 0.3;
      center = 0.5;
      bottom = 0.7;
      lineXleft = 0.11;
      lineYright = 0.1;
      lineXleftMajor = 0.11;
      lineYrightMajor = 0.09;
      majorLineEach = 3;
      numberEach = 3;
      step = 10;
      stepSize = "(0.70 - 0.30) / 10";
      align = "center";
      scale = 1;
      pos[] = {0.3,0.04};
      right[] = {0.36,0.04};
      down[] = {0.3,0.09};
     };
     class HorizontalLine
     {
      clipTL[] = {0.2,0.12};
      clipBR[] = {0.8,0.96};
      class HorizontalLineDraw
      {
       type = "line";
       width = 4;
       points[] = {
        { "HorizonVector",
         { "-6 * 0.0375",0 },1 },
        { "HorizonVector",
         { "-5 * 0.0375",0 },1 },
        {  },
        { "HorizonVector",
         { "-4 * 0.0375",0 },1 },
        { "HorizonVector",
         { "-3 * 0.0375",0 },1 },
        {  },
        { "HorizonVector",
         { "-2 * 0.0375",0 },1 },
        { "HorizonVector",
         { "-1 * 0.0375",0 },1 },
        {  },
        { "HorizonVector",
         { "1 * 0.0375",0 },1 },
        { "HorizonVector",
         { "2 * 0.0375",0 },1 },
        {  },
        { "HorizonVector",
         { "3 * 0.0375",0 },1 },
        { "HorizonVector",
         { "4 * 0.0375",0 },1 },
        {  },
        { "HorizonVector",
         { "5 * 0.0375",0 },1 },
        { "HorizonVector",
         { "6 * 0.0375",0 },1 }};
      };
     };
     class MGun
     {
      condition = "on";
      class Circle
      {
       type = "line";
       width = 4;
       points[] = {
        { "ForwardVector",1,"WeaponAim",
         { 0.05,0 },1 },
        { "ForwardVector",1,"WeaponAim",
         { 0.025,0 },1 },
        {  },
        { "ForwardVector",1,"WeaponAim",
         { 0,0.0497118 },1 },
        { "ForwardVector",1,"WeaponAim",
         { 0,0.0248559 },1 },
        {  },
        { "ForwardVector",1,"WeaponAim",
         { -0.05,0 },1 },
        { "ForwardVector",1,"WeaponAim",
         { -0.025,0 },1 },
        {  },
        { "ForwardVector",1,"WeaponAim",
         { 0,-0.0497118 },1 },
        { "ForwardVector",1,"WeaponAim",
         { 0,-0.0248559 },1 }};
      };
     };
     class Rockets
     {
      condition = "missile";
      class Circle
      {
       type = "line";
       width = 4;
       points[] = {
        { "ForwardVector",1,"WeaponAim",
         { -0.25,-0.25 },1 },
        { "ForwardVector",1,"WeaponAim",
         { -0.25,-0.2 },1 },
        {  },
        { "ForwardVector",1,"WeaponAim",
         { -0.25,0.25 },1 },
        { "ForwardVector",1,"WeaponAim",
         { -0.25,0.2 },1 },
        {  },
        { "ForwardVector",1,"WeaponAim",
         { 0.25,-0.25 },1 },
        { "ForwardVector",1,"WeaponAim",
         { 0.25,-0.2 },1 },
        {  },
        { "ForwardVector",1,"WeaponAim",
         { 0.25,0.25 },1 },
        { "ForwardVector",1,"WeaponAim",
         { 0.25,0.2 },1 },
        {  },
        { "ForwardVector",1,"WeaponAim",
         { -0.25,-0.25 },1 },
        { "ForwardVector",1,"WeaponAim",
         { -0.2,-0.25 },1 },
        {  },
        { "ForwardVector",1,"WeaponAim",
         { -0.25,0.25 },1 },
        { "ForwardVector",1,"WeaponAim",
         { -0.2,0.25 },1 },
        {  },
        { "ForwardVector",1,"WeaponAim",
         { 0.25,-0.25 },1 },
        { "ForwardVector",1,"WeaponAim",
         { 0.2,-0.25 },1 },
        {  },
        { "ForwardVector",1,"WeaponAim",
         { 0.25,0.25 },1 },
        { "ForwardVector",1,"WeaponAim",
         { 0.2,0.25 },1 },
        {  },
        { "ForwardVector",1,"WeaponAim",
         { 0.035,0.0347983 },1 },
        { "ForwardVector",1,"WeaponAim",
         { 0.018,0.0178963 },1 },
        {  },
        { "ForwardVector",1,"WeaponAim",
         { -0.035,0.0347983 },1 },
        { "ForwardVector",1,"WeaponAim",
         { -0.018,0.0178963 },1 },
        {  },
        { "ForwardVector",1,"WeaponAim",
         { -0.035,-0.0347983 },1 },
        { "ForwardVector",1,"WeaponAim",
         { -0.018,-0.0178963 },1 },
        {  },
        { "ForwardVector",1,"WeaponAim",
         { 0.035,-0.0347983 },1 },
        { "ForwardVector",1,"WeaponAim",
         { 0.018,-0.0178963 },1 }};
      };
     };
    };
   };
  };
