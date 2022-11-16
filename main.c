/*
*/
unsigned short checkSprtAround(short OBJ1X,  short OBJ1Y,  short OBJ2X, short OBJ2Y, unsigned short size){
	if (
		((OBJ1Y == OBJ2Y) & ((OBJ1X > OBJ2X) & ((OBJ1X - size) <= OBJ2X))) |
		((OBJ1Y == OBJ2Y) & ((OBJ1X < OBJ2X) & ((OBJ1X + size) >= OBJ2X))) |
		((OBJ1X == OBJ2X) & ((OBJ1Y > OBJ2Y) & ((OBJ1Y - size) <= OBJ2Y))) |
		((OBJ1X == OBJ2X) & ((OBJ1Y < OBJ2Y) & ((OBJ1Y + size) >= OBJ2Y)))
	){
		return 1;
	}else{
		return 0;
	}
}
