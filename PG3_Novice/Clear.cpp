#include "Clear.h"
#include <Novice.h>

void Clear::Initialize() {}

void Clear::Update(char* keys, char* preKeys) {
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNum = Title;
	}
}

void Clear::Draw() {
	Novice::ScreenPrintf(640, 350, "GAME Clear");
}
