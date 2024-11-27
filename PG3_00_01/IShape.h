#pragma once
#include <stdio.h>

class IShape {
public:
	//IShape();
	virtual void Size() = 0;
	virtual void Draw() = 0;
protected:
	const char* name;
	float radius = 5;
	int wide = 2;
	int height = 4;
};