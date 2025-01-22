#pragma once
#include <stdio.h>

class Enemy {
public:
	Enemy();
	virtual ~Enemy();
	virtual void Attack();
protected:
	const char* name;
};