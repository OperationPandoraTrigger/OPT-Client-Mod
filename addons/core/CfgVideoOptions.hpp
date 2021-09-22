
class CfgVideoOptions 
{
	class ATOCQuality 
	{
		class Disabled 
		{
			grass = 0;
			newTrees = 0;
			oldTrees = 0;
			other = 0;
			text = "Disabled";
		};
		
		class All : Disabled 
		{
			grass = 0;
			newTrees = 0;
			oldTrees = 0;
			other = 0;
			text = "Disabled All trees + grass";
		};
		
		class Grass : Disabled 
		{
			grass = 0;
			newTrees = 0;
			oldTrees = 0;
			other = 0;
			text = "Disabled Grass";
		};
		
		class NewTree : Disabled 
		{
			grass = 0;
			newTrees = 0;
			oldTrees = 0;
			other = 0;
			text = "Disabled Arrowhead trees";
		};
		
		class NewTreeGrass : Disabled 
		{
			grass = 0;
			newTrees = 0;
			oldTrees = 0;
			other = 0;
			text = "Disabled Arrowhead trees + grass";
		};
		
		class OldTree : Disabled 
		{
			grass = 0;
			newTrees = 0;
			oldTrees = 0;
			other = 0;
			text = "Disabled Arma 2 trees";
		};
		
		class OldTreeNewTree : Disabled 
		{
			grass = 0;
			newTrees = 0;
			oldTrees = 0;
			other = 0;
			text = "Disabled All trees";
		};
		
		class OldTreeGrass : Disabled 
		{
			grass = 0;
			newTrees = 0;
			oldTrees = 0;
			other = 0;
			text = "Disabled Arma 2 trees + grass";
		};
	};
};
