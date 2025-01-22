#include <stdio.h>     
#include <string>       
#include <thread>       
#include <functional>   
#include <iostream>     

bool a = false;
bool b = false;

void thread1() {
	printf("thread1\n");
	a = true;
}

void thread2() {
	while (!a) {           // a が true になるまでループ
		if (a) {
			break;         // a が true ならループを抜ける
		}
		else {
			continue;      // a が false の場合はループを続ける
		}
	}
	printf("thread2\n");
	b = true;
}
void thread3() {
	while (!b) {           // b が true になるまでループ
		if (b) {
			break;         // b が true ならループを抜ける
		}
		else {
			continue;      // b が false の場合はループを続ける
		}
	}
	printf("thread3\n");
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
