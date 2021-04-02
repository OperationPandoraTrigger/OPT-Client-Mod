private ["_MaxIntensity", "_Boost", "_Intensity", "_looptime", "_vehicle"];

_MaxIntensity = 2;
_Boost = 0.25;
_Intensity = 0;

_maxspeed = 30;
_vehicle = _this;
sleep 0.5;

_looptime = 0.1;

while {(alive _vehicle) && (isengineon _vehicle) && ((driver _vehicle) != objNull) && ((speed _vehicle) < 32) && ((speed _vehicle) > 0)} do 
{
	if (_Intensity < _MaxIntensity) then 
	{
		_Intensity = _Intensity + 0.1*(15*_looptime);
	};
	if ((speed _vehicle) < _maxspeed) then 
	{
		_vehicle setVelocity [(velocity _vehicle select 0)+((vectordir _vehicle) select 0)*((_Boost*_Intensity/2)*(15*_looptime)),(velocity _vehicle select 1)+((vectordir _vehicle) select 1)*((_Boost*_Intensity/2)*(15*_looptime)),(velocity _vehicle select 2)+((vectordir _vehicle) select 2)*((_Boost*_Intensity/2)*(10*_looptime))];
	};
	
	_looptime = time;
	sleep 0.05;
	_looptime = time - _looptime;
};

if(true) exitWith {0};