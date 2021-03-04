#ifndef NND_CARD_H_
#define NND_CARD_H_

#include "kernel.h"
#include "monster.h"

enum card_type {
	CARD_TYPE_MONSTER,
	CARD_TYPE_MAGIC,
	CARD_TYPE_TRAP,
	CARD_TYPE_TOOL
};

struct card {
	enum card_type type;
	struct monster *monster_data;
};

#endif
