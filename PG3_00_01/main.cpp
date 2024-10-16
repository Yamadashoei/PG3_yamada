#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

typedef void(*Callback)(int*);


void setTimeout(Callback p, int second) {
    //コールバック関数を呼び出す
    Sleep(second * 1000);
    p(&second);
}

// コールバック関数
void judgeResult(int* result) {
    if (*result % 2 == 0) {
        printf("サイコロの出目は %d です。偶数！\n", *result);
    }
    else {
        printf("サイコロの出目は %d です。奇数！\n", *result);
    }
}

int main() {
    int dice;
    int number;

    printf("サイコロを振ります\n");

    // サイコロを振る（1〜6のランダムな数値を生成）
    srand((unsigned int)time(NULL));
    dice = rand() % 6 + 1;

    // ユーザーに1か2で入力させる
    printf("サイコロの出目が半(奇数)か丁(偶数)かを当ててください\n");
    printf("1が半(奇数), 2が丁(偶数): ");
    scanf_s("%d", &number);

    // 3秒間待つ
    setTimeout(judgeResult, 3);

    // ユーザーの回答を判定
    if ((dice == 1 && number == 2) || (dice == 2 && number == 1) || (dice == 3 && number == 2) || (dice == 4 && number == 1) || (dice == 5 && number == 2) || (dice == 6 && number == 1)) {
        printf("正解！\n");
    }
    else {
        printf("不正解！\n");
    }

    return 0;
}