
#pragma once
#include "Enemy.h"

class goblin : public Enemy{
public:
	goblin();
	~goblin()override;

	void Attack() override;

private:
};