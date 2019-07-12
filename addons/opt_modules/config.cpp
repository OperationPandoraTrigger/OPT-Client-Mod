class CfgPatches
{
    class opt_modules
    {
        units[] = {"OPT_BeamPoint"};
        weapons[] = {};
        requiredVersion = 0.100000;
        requiredAddons[] = {};
    };
};

class CfgFactionClasses
{
    class NO_CATEGORY;
    class OPT : NO_CATEGORY
    {
        displayName = "OPT";
    };
};

class CfgVehicles
{
    class Logic;
    class Module_F : Logic
    {
        class AttributesBase
        {
            class Default;
            class Edit;              // Default edit box (i.e., text input field)
            class Combo;             // Default combo box (i.e., drop-down menu)
            class Checkbox;          // Default checkbox (returned value is Bool)
            class CheckboxNumber;    // Default checkbox (returned value is Number)
            class ModuleDescription; // Module description
            class Units;             // Selection of units on which the module is applied
        };
        // Description base classes, for more information see below
        class ModuleDescription
        {
            class AnyStaticObject;
        };
    };
    class OPT_BeamPoint : Module_F
    {
        // Standard object definitions
        scope = 2;                  // Editor visibility; 2 will show it in the menu, 1 will hide it.
        displayName = "Beam Punkt"; // Name displayed in the menu
        // icon = "\myTag_addonName\data\iconNuke_ca.paa"; // Map icon. Delete this entry to use the default icon
        category = "OPT";

        // Name of function triggered once conditions are met
        function = "opt_fnc_moduleBeamPoint";
        // Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
        functionPriority = 1;
        // 0 for server only execution, 1 for global execution, 2 for persistent global execution
        isGlobal = 1;
        // 1 for module waiting until all synced triggers are activated
        isTriggerActivated = 0;
        // 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
        isDisposable = 1;
        // // 1 to run init function in Eden Editor as well
        is3DEN = 0;

        // Menu displayed when the module is placed or double-clicked on by Zeus
        curatorInfoType = "RscDisplayAttributeModuleBeamPoint";

        // Module attributes, uses https://community.bistudio.com/wiki/Eden_Editor:_Configuring_Attributes#Entity_Specific
        class Attributes : AttributesBase
        {
            // Arguments shared by specific module type (have to be mentioned in order to be present)
            class Units : Units
            {
                property = "opt_beamPoints";
            };
            // Module specific arguments
            class Name : Edit
            {
                property = "opt_beamPoint_name";
                displayName = "Name";
                tooltip = "Name des Beampunktes";
                // Default text filled in the input box
                // Because it's an expression, to return a String one must have a string within a string
                defaultValue = """""";
            };
            class Type : Combo
            {
                // Unique property, use "<moduleClass>_<attributeClass>" format to make sure the name is unique in the world
                property = "opt_beamPoint_type";
                displayName = "Typ";             // Argument label
                tooltip = "Typ des Beampunktes"; // Tooltip description
                typeName = "STRING";             // Value type, can be "NUMBER", "STRING" or "BOOL"
                defaultValue = """target"""; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
                class Values
                {
                    class Source
                    {
                        name = "Quelle";
                        value = "source";
                    }; // Listbox item
                    class Target
                    {
                        name = "Ziel";
                        value = "target";
                    };
                    class Both
                    {
                        name = "Beides";
                        value = "both";
                    };
                };
            };
            class Side : Combo
            {
                // Unique property, use "<moduleClass>_<attributeClass>" format to make sure the name is unique in the world
                property = "opt_beamPoint_side";
                displayName = "Seite";             // Argument label
                tooltip = "Welche Seite kann den Punkt nutzen?"; // Tooltip description
                typeName = "STRING";             // Value type, can be "NUMBER", "STRING" or "BOOL"
                defaultValue = """WEST"""; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
                class Values
                {
                    class WEST
                    {
                        name = "West";
                        value = "WEST";
                    }; // Listbox item
                    class EAST
                    {
                        name = "East";
                        value = "EAST";
                    };
                    class GUER
                    {
                        name = "Resistance";
                        value = "GUER";
                    };
                    class CIV
                    {
                        name = "Civilian";
                        value = "CIV";
                    };
                };
            };
            class ValidUntil : Combo
            {
                // Unique property, use "<moduleClass>_<attributeClass>" format to make sure the name is unique in the world
                property = "opt_beamPoint_validUntil";
                displayName = "Wann aktiv?";             // Argument label
                tooltip = "Wie lange ist dieser Punkt aktiv?"; // Tooltip description
                typeName = "STRING";             // Value type, can be "NUMBER", "STRING" or "BOOL"
                defaultValue = """peace"""; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
                class Values
                {
                    class Peace
                    {
                        name = "Nur während Waffenruhe";
                        value = "peace";
                    };
                    class Always
                    {
                        name = "Immer";
                        value = "always";
                    };
                    class Never
                    {
                        name = "Nie";
                        value = "never";
                    };
                };
            };
            
            class ClassInfantry : Checkbox
            {
                property = "opt_beamPoint_allowedInfantry";
                displayName = "Infanterie";
                tooltip = "Darf Infanterie diesen Punkt nutzen?"; // Tooltip description
                typeName = "BOOL";             // Value type, can be "NUMBER", "STRING" or "BOOL"
                defaultValue = "true"; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
            };
            class ClassLight : Checkbox
            {
                property = "opt_beamPoint_allowedLight";
                displayName = "Leichte unbewaffnete Fzg";
                tooltip = "Darf dieser Punkt von leichten (unbewaffneten) Fahrzeugen und Trucks genutzt werden?"; // Tooltip description
                typeName = "BOOL";             // Value type, can be "NUMBER", "STRING" or "BOOL"
                defaultValue = "true"; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
            };
            class ClassArmed : Checkbox
            {
                property = "opt_beamPoint_allowedArmed";
                displayName = "Leichte bewaffnete Fzg";
                tooltip = "Darf dieser Punkt von leichten (bewaffneten) Fahrzeugen genutzt werden?"; // Tooltip description
                typeName = "BOOL";             // Value type, can be "NUMBER", "STRING" or "BOOL"
                defaultValue = "true"; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
            };
            class ClassAPC : Checkbox
            {
                property = "opt_beamPoint_allowedAPC";
                displayName = "APCs";
                tooltip = "Darf dieser Punkt von APCs,IFVs und AA genutzt werden?"; // Tooltip description
                typeName = "BOOL";             // Value type, can be "NUMBER", "STRING" or "BOOL"
                defaultValue = "true"; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
            };
            class ClassTank : Checkbox
            {
                property = "opt_beamPoint_allowedTank";
                displayName = "Panzer";
                tooltip = "Darf dieser Punkt von Panzern genutzt werden?"; // Tooltip description
                typeName = "BOOL";             // Value type, can be "NUMBER", "STRING" or "BOOL"
                defaultValue = "true"; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
            };
            class ClassHeli : Checkbox
            {
                property = "opt_beamPoint_allowedHeli";
                displayName = "Helikopter";
                tooltip = "Darf dieser Punkt von Helikoptern genutzt werden?"; // Tooltip description
                typeName = "BOOL";             // Value type, can be "NUMBER", "STRING" or "BOOL"
                defaultValue = "false"; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
            };
            class ClassPlane : Checkbox
            {
                property = "opt_beamPoint_allowedPlane";
                displayName = "Plane";
                tooltip = "Darf dieser Punkt von Flugzeugen genutzt werden?"; // Tooltip description
                typeName = "BOOL";             // Value type, can be "NUMBER", "STRING" or "BOOL"
                defaultValue = "false"; // Default attribute value. WARNING: This is an expression, and its returned value will be used (50 in this case)
            };
            class ModuleDescription : ModuleDescription
            {
            }; // Module description should be shown last
        };

        // Module description. Must inherit from base class, otherwise pre-defined entities won't be available
        class ModuleDescription : ModuleDescription
        {
            description = "Modul zum Anlegen von Beampunkten"; // Short description, will be formatted as structured text
            sync[] = {"LocationArea_F"};                       // Array of synced entities (can contain base classes)

            class LocationArea_F
            {
                description[] = {// Multi-line descriptions are supported
                                 "First line",
                                 "Second line"};
                position = 1;                          // Position is taken into effect
                direction = 1;                         // Direction is taken into effect
                optional = 0;                          // Synced entity is optional
                duplicate = 0;                         // Multiple entities of this type can be synced
                synced[] = {"EmptyDetector", "AnyStaticObject"}; // Pre-define entities like "AnyBrain" can be used. See the list below
            };
        };
    };
};

class CfgFunctions 
{
	class opt
	{
		class Effects
		{
			file = "\opt_modules\functions";
			class moduleBeamPoint{};
		};
	};
};