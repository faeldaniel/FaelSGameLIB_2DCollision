typedef short bool;
#define TRUE 1
#define FALSE 0
//POSTION
#define UP 1
#define RIGHT 2
#define LEFT 3
#define DOWN 4


//---------------------------------------------------------------------------------
//This function check if OBJ1 this arround OBJ2
bool checkObjAround(short OBJ1X,  short OBJ1Y,  short OBJ2X, short OBJ2Y, unsigned short size){
	if (
		((OBJ1Y == OBJ2Y) & ((OBJ1X > OBJ2X) & ((OBJ1X - size) <= OBJ2X))) |
		((OBJ1Y == OBJ2Y) & ((OBJ1X < OBJ2X) & ((OBJ1X + size) >= OBJ2X))) |
		((OBJ1X == OBJ2X) & ((OBJ1Y > OBJ2Y) & ((OBJ1Y - size) <= OBJ2Y))) |
		((OBJ1X == OBJ2X) & ((OBJ1Y < OBJ2Y) & ((OBJ1Y + size) >= OBJ2Y)))
	){
		return TRUE;
	}else{
		return FALSE;
	}
}

//---------------------------------------------------------------------------------
//This function check if OBJ1 this arround OBJ2 and return your position
bool checkObjAroundAndReturnPosition(short OBJ1X,  short OBJ1Y,  short OBJ2X, short OBJ2Y, unsigned short size){
	if((OBJ1Y == OBJ2Y) & ((OBJ1X > OBJ2X) & ((OBJ1X - size) <= OBJ2X))){
		return LEFT;
	}else if((OBJ1Y == OBJ2Y) & ((OBJ1X < OBJ2X) & ((OBJ1X + size) >= OBJ2X))){
		return RIGHT;
	}else if((OBJ1X == OBJ2X) & ((OBJ1Y > OBJ2Y) & ((OBJ1Y - size) <= OBJ2Y))){
		return UP;
	}else if((OBJ1X == OBJ2X) & ((OBJ1Y < OBJ2Y) & ((OBJ1Y + size) >= OBJ2Y))){
		return DOWN;
	}else{
		return FALSE;
	}
}

//---------------------------------------------------------------------------------
//This function check colision for sprites
bool checkObjCol(short OBJ1X, short OBJ1Y, short OBJ2X, short OBJ2Y, unsigned short direction, unsigned short size){

	switch(direction){

			case UP:
				if ((OBJ1X == OBJ2X) & ((OBJ1Y > OBJ2Y) & ((OBJ1Y - size) <= OBJ2Y))){
					return TRUE;
				}else{
					return FALSE;
				}
			break;

			case DOWN:
				if ((OBJ1X == OBJ2X) & ((OBJ1Y < OBJ2Y) & ((OBJ1Y + size) >= OBJ2Y))){
					return TRUE;
				}else{
					return FALSE;
				}
			break;

			case LEFT:
				if ((OBJ1Y == OBJ2Y) & ((OBJ1X > OBJ2X) & ((OBJ1X - size) <= OBJ2X ))){
					return TRUE;
				}else{
					return FALSE;
				}
			break;

			case RIGHT:
				if ((OBJ1Y == OBJ2Y) & ((OBJ1X < OBJ2X) & ((OBJ1X + size) >= OBJ2X ))){
					return TRUE;
				}else{
					return FALSE;
				}
			break;

			default:
				return FALSE;
			break;

		}
}

