#pragma once
#include <memory>
#include "Scene.h" 
#include "Title.h"
#include "Stage.h"
#include "Clear.h"

class GameManager {
public:

	GameManager();
	~GameManager();

	int Run();

private:
	std::unique_ptr<Scene> sceneArr_[3];

	int currentSceneNum_;
	int prevSceneNum_;

};