#include "Enemy.h"

// 接近、攻撃、離脱の順
void (Enemy::* Enemy::actionFuncTable[])() = {
    &Enemy::Approach,
    &Enemy::Attack,
    &Enemy::Retreat,
};

// 敵の接近
void Enemy::Approach() {
    printf("敵が接近\n");
}

// 敵の攻撃（射撃
void Enemy::Attack() {
    printf("敵が射撃\n");
}

// 敵の離脱
void Enemy::Retreat() {
    printf("敵が後退\n");
}

// 敵の行動を更新
void Enemy::Update() {
    // 行動ステートを循環させる
    if (actionCounter > 2) {
        actionCounter = 0;
    }

    int userInput; // ユーザーからの入力

    // 行動選択（0: 動作継続、1: 停止）
    printf("行動を選択してください（0: 継続, 1: 停止）: ");
    scanf_s("%d", &userInput);

    if (userInput == 0) {
        // 現在のステートに対応するアクションを実行
        (this->*actionFuncTable[actionCounter])();
    }
    else if (userInput == 1) {
        // 停止フラグを立てる
        isStopped = true;
        printf("敵が停止しました。\n");
    }

    // 次の行動ステートに進む
    actionCounter++;
}
