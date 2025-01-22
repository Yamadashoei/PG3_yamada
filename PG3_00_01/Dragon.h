#pragma once
#include "Enemy.h"

class Dragon : public Enemy {
public:
	Dragon();
	~Dragon()override;

	void Attack() override;

private:

};

