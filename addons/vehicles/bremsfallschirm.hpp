class UserActions 
{
    class Bremsfallschirm
    {
        displayName = "<t color='#FFD700'>Bremsfallschirm</t>";
        position = "action";
        radius = 5;
        condition = "(alive this) and (isTouchingGround vehicle player) and (vehicle player != player)";
        statement = "this execVM ""\opt_a3_vehicles\scripts\bremsfallschirm.sqf"";";    
        onlyforplayer = 1;
    };
};
