#ifndef NND_CUBE_H_
#define NND_CUBE_H_

#include <stdlib.h>

#include "kernel.h"
#include "monster.h"

struct monster;

#define CUBE_FACE_NUMBER 6

enum cube_color {
	CUBE_COLOR_BLACK,
	CUBE_COLOR_BLUE,
	CUBE_COLOR_GREEN,
	CUBE_COLOR_RED,
	CUBE_COLOR_WHITE,
	CUBE_COLOR_YELLOW
};

enum cube_sign_order {
	CUBE_SIGN_ORDER_MONSTER = 1,
	CUBE_SIGN_ORDER_ATTACK,
	CUBE_SIGN_ORDER_DEFENCE,
	CUBE_SIGN_ORDER_MOVE,
	CUBE_SIGN_ORDER_MAGIC,
	CUBE_SIGN_ORDER_TRAP
};

struct cube {
	int8 sign[CUBE_FACE_NUMBER];
	int32 id;
	enum cube_color color;
	struct monster *target_monster;
};

int sort_cube(const struct cube *, const struct cube *);
void query_cube(struct cube *, const char *, ...);

#endif
