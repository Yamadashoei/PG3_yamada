#include "Scene.h"

class Clear : public Scene {
public:
	void Initialize() override;
	void Update(char* keys, char* preKeys) override;
	void Draw() override;
};