#include <stdio.h>

class /*親クラス*/
{
public:
	virtual void /*関数名*/() = 0;
	virtual void /*関数名*/() = 0;

protected:
	float size;
	float radius;
};

class /*円クラス*/ :public /*親クラス*/
{
public:
	void Size();
	void Draw() { printf("面積 %f\n", size); };
};

class /*四角クラス*/ :public /*親クラス*/
{
public:
	void Size() override;
	void Draw() { printf("面積 %f\n", size); };
};

void /*親クラス*/::Size() {}

void /*円クラス*/::Size()
{
	radius = 5.0f;
	printf("円の半径 %f\n", radius);
	size = radius * radius * 3.14f;
}

void /*四角クラス*/::Size()
{
	radius = 5.0f;
	printf("矩形の半径 %f\n", radius);
	size = radius * 2.0f * radius * 2.0f;
}

int main(void) {

	/*親クラス*/ *ishape[2] = { new /*円クラス*/ ,new /*四角クラス*/ };

	ishape[0]->Size();
	ishape[1]->Size();

	ishape[0]->Draw();
	ishape[1]->Draw();

	delete ishape[0];
	delete ishape[1];

	return 0;
}
