class UserActions 
{
	class Berggang 
	{
		displayName = "<t color='#5A9EFF'>Berggang einlegen</t>";
		position = "pilotcontrol";
		radius = 5;
		condition = "((driver this) == player) and (isengineon this) and ((speed this) > 0) and ((speed this) < 20)";
		statement = "this execVM ""\opt_a3_vehicles\scripts\berggang.sqf"";";
		onlyforplayer = "false";
	};
};