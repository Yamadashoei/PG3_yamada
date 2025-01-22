#include <stdio.h>
#include "Enemy.h"
#include "goblin.h"
#include "Dragon.h"

int main(void) {

	Enemy* enemies[3];
	for (int i = 0; i < 3; i++) {
		if (i == 0) {
			enemies[i] = new Dragon;
		}
		else {
			enemies[i] = new goblin;
		}
	}

	printf("\n");

	for (int i = 0; i < 3; i++) {
		enemies[i]->Attack();
	}

	printf("\n");

	for (int i = 0; i < 3; i++) {
		enemies[i]->~Enemy();
	}

	return 0;
}