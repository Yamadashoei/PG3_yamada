#include <stdio.h>      // 標準入出力ライブラリ
#include <string>       // 文字列操作のための標準ライブラリ
#include <thread>       // スレッドを扱うためのライブラリ
#include <functional>   // 関数オブジェクトを扱うためのライブラリ
#include <iostream>     // 入出力ストリームのためのライブラリ

bool a = false; // thread1 が処理を完了したことを示すフラグ
bool b = false; // thread2 が処理を完了したことを示すフラグ

// thread1: "thread1" と出力し、フラグ a を true に設定する関数
void thread1() {
	printf("thread1\n"); // thread1 の開始を出力
	a = true;             // フラグ a を true に設定
}

// thread2: a が true になるのを待機し、"thread2" と出力してフラグ b を true に設定する関数
void thread2() {
	while (!a) {           // a が true になるまでループ
		if (a) {          // 冗長的な条件チェック (実際にはループ条件で十分)
			break;         // a が true ならループを抜ける
		}
		else {
			continue;      // a が false の場合はループを続ける
		}
	}
	printf("thread2\n"); // thread2 の開始を出力
	b = true;             // フラグ b を true に設定
}

// thread3: b が true になるのを待機し、"thread3" と出力する関数
void thread3() {
	while (!b) {           // b が true になるまでループ
		if (b) {          // 冗長的な条件チェック (実際にはループ条件で十分)
			break;         // b が true ならループを抜ける
		}
		else {
			continue;      // b が false の場合はループを続ける
		}
	}
	printf("thread3\n"); // thread3 の開始を出力
}

// メイン関数
int main() {
	// 3つのスレッドを作成
	std::thread th1(thread1); 
	std::thread th2(thread2); 
	std::thread th3(thread3); 

	// スレッドの終了を待機
	th1.join();
	th2.join(); 
	th3.join(); 

	return 0;
}
