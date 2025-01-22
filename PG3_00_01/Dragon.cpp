#include "Dragon.h"

Dragon::Dragon() {
	printf("ドラゴンが現れた\n");
}

Dragon::~Dragon() {
	printf("ドラゴンを倒した\n");
}

void Dragon::Attack() {
	printf("ドラゴンの攻撃\n");
}