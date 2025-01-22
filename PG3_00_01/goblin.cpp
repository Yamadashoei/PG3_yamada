#include "goblin.h"

goblin::goblin() {
	printf("スライムが現れた\n");
}

goblin::~goblin() {
	printf("スライムを倒した\n");
}

void goblin::Attack() {
	printf("スライムの攻撃\n");
}