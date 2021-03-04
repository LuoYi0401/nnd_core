#ifndef NND_MONSTER_H_
#define NND_MONSTER_H_

#include "effect.h"
#include "kernel.h"
#include "list.h"

struct effect;

enum monster_race {
	MONSTER_RACE_DRAGON,
	MONSTER_RACE_HUMAN,
};

struct monster_data {
	int32 attack;
	int32 defence;
	int32 life;
	enum monster_race race;
	struct list_head head;
};

/* 
 * @data the first node is a real-time data,
 * once add/delete/update a node must update the first node
 * @data 第一个节点为实时数据
 * 每次增加/删除/修改其他节点时,必须更新第一个节点
 */
struct monster {
	int32 id;
	struct monster_data data;
	struct effect ability;
};

void sort_monster(const struct monster *m1, const struct monster *m2);
void query_monster(struct monster *result, const char *fmt, ...);

#endif
