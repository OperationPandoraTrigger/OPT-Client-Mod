class CfgPatches 
{
    class opt_timemarkers 
	{
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.68;
        requiredAddons[] = {};
        version = 1.1.3;
        author[] = {"S3Savage"};
        authorUrl = "";
    };
};

class CfgFunctions 
{
    class S3S 
	{
        class timemarkers 
		{
            class init 
			{
                file = "\opt_timemarkers\init.sqf";
                postInit = 1;
            };
        };
    };
};


