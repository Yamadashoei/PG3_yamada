#include <Novice.h>
#include "GameManager.h"

const char kWindowTitle[] = "LE2C_26_ヤマダ_ショウエイ_";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	//ゲーム呼び出し
	GameManager* gameManager_ = new GameManager();

	gameManager_->Run();

	// ライブラリの終了
	Novice::Finalize();

	delete gameManager_;

	return 0;
}
