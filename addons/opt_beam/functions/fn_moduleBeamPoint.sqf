// Argument 0 is module logic.
_logic = param [0,objNull,[objNull]];
// Argument 1 is list of affected units (affected by value selected in the 'class Units' argument))
_units = param [1,[],[[]]];
// True when the module was activated, false when it's deactivated (i.e., synced triggers are no longer active)
_activated = param [2,true,[true]];
// Module specific behavior. Function can extract arguments from logic and use them.
if (_activated) then {

	_logic setVariable ["unit", (_units select 0)];
	if (isNil "opt_beam_Points") then {
		opt_beam_Points = [_logic ];
	} else {
		opt_beam_Points pushBack _logic;
	}
};
// Module function is executed by spawn command, so returned value is not necessary, but it's good practice.
opt_beam_Points