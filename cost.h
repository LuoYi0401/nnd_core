#ifndef NND_COST_H_
#define NND_COST_H_

#include "kernel.h"
#include "list.h"

enum cost_type {
	COST_TYPE_NORMAL,
};

struct effect_cost {
	enum cost_type type;
	int32 cost_value;
	struct list_head head;
};

static inline void cost_init(struct effect_cost *cost)
{
	cost->type = COST_TYPE_NORMAL;
	cost->cost_value = 0;
	INIT_LIST_HEAD(&(cost->head));
}

#endif
