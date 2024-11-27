#include "Circle.h"

void Circle::Size() {
	answer = radius * radius * 3.14f;
}

void Circle::Draw() {
	printf("円の面積は：%0.2f\n", answer);
}