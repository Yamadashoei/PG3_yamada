#include "Rectangle.h"

void Rectangle::Size() {
	answer = wide * height;
}

void Rectangle::Draw() {
	printf("短形の面積は：%d\n", answer);
}