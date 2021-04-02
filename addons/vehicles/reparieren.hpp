class UserActions 
{
	class Reparatur 
	{
		displayName = "<t color='#FFD700'>Reparieren</t>";
		position = "action";
		radius = 17;
		condition = "(alive this) and (isTouchingGround vehicle player) and (vehicle player != player)";
		statement = "this execVM ""\opt_a3_vehicles\scripts\reparieren.sqf"";";	
		onlyforplayer = 1;
	};
};
