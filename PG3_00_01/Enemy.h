#include <stdio.h>

class Enemy {
public:
    // 敵の接近処理
    void Approach();

    // 敵の攻撃（射撃）処理
    void Attack();

    // 敵の離脱処理
    void Retreat();

    // 敵の行動を更新
    void Update();

    // 停止フラグを取得する
    bool IsStopped() const { return isStopped; }

private:
    // 関数ポインタテーブル（行動ステートに対応）
    static void (Enemy::* actionFuncTable[])();

    // 現在の行動ステートのカウント
    int actionCounter = 0;

    // 敵の動作停止フラグ
    bool isStopped = false;
};
