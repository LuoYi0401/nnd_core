#ifndef NND_TRAP_H_
#define NND_TRAP_H_

#include "effect.h"

enum trap_type {
	MAGIC_TYPE_NORMAL
};

struct trap {
	int32 id;
	enum trap_type type;
	struct effect effect_data;
	int8 speed;
};

#endif
