// Argument 0 is module logic.
_logic = param [0,objNull,[objNull]];
// Argument 1 is list of affected units (affected by value selected in the 'class Units' argument))
_units = param [1,[],[[]]];
// True when the module was activated, false when it's deactivated (i.e., synced triggers are no longer active)
_activated = param [2,true,[true]];
// Module specific behavior. Function can extract arguments from logic and use them.
if (_activated) then {

	_name = _logic getVariable "Name";
	diag_log(_name);
	// Attribute values are saved in module's object space under their class names
	hint format ["BeamPoint name is: %1", _name ]; // will display the bomb yield, once the game is started 
	if (isNil "opt_beam_Points") then {
		opt_beam_Points = [_logic ];
	} else {
		opt_beam_Points pushBack _logic;
	}
};
// Module function is executed by spawn command, so returned value is not necessary, but it's good practice.
diag_log(opt_beam_Points);
opt_beam_Points