#include <stdio.h>
#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"

int main(void) {

	IShape* shape[2];
	for (int i = 0; i < 2; i++) {
		if (i == 0) {
			shape[i] = new Circle;
		}
		else {
			shape[i] = new Rectangle;
		}
	}

	printf("円の半径:5\n短形の底辺:2\n短形の高さ:4\n");

	for (int i = 0; i < 2; i++) {
		shape[i]->Size();
	}

	printf("\n");

	for (int i = 0; i < 2; i++) {
		shape[i]->Draw();
	}

	return 0;
}