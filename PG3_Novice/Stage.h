#include"Scene.h"
#include <Vector2.h>


class Stage : public Scene {
public:
	void Initialize() override;
	void Update(char* keys, char* preKeys) override;
	void Draw() override;

private:
	Vector2 pos;
	Vector2 enemy;
	Vector2 bullet;

	float speed = 10;
	int playerRadius = 20;
	int enemyRadius = 50;
	int bulletRadius = 10;
};