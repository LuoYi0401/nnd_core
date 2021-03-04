#ifndef NND_EFFECT_H_
#define NND_EFFECT_H_

#include "cost.h"
#include "kernel.h"
#include "list.h"

enum effect_type {
	EFFECT_TYPE_DESTROY
};

struct effect {
	int32 value;
	int32 last_time;
	int32 one_turn_times;
	enum effect_type type;
	struct list_head head;
	struct effect_cost dependence;
};

#endif
