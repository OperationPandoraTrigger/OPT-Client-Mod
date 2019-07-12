if (isTouchingGround vehicle player) then {
vehicle player vehiclechat "Bremsfallschirm ausgelöst",
sleep 2,
vehicle player setVelocity [0, 0, 0]
};