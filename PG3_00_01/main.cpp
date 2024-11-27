#include <stdio.h>
#include "Enemy.h"

int main() {
    // 敵オブジェクトを動的に生成
    Enemy* enemy = new Enemy();

    // ゲームループフラグ
    printf("[行動する場合は 0 : 止める場合は 1 を入力してください]\n");
    while (!enemy->IsStopped()) { // 停止フラグが立つまでループ
        enemy->Update(); // 敵の行動を更新
    }

    // メモリ解放
    delete enemy;

    printf("プログラムを終了します。\n");
    return 0;
}
