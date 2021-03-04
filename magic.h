#ifndef NND_MAGIC_H_
#define NND_MAGIC_H_

#include "effect.h"

enum magic_type {
	MAGIC_TYPE_NORMAL
};

struct magic {
	int32 id;
	enum magic_type type;
	struct effect effect_data;
	int8 speed;
};

#endif
