//リストで駅名の配列を定義して表示するサンプル
//このサンプルに2回駅を追加して2回for文で表示する処理を追加する
#include <stdio.h>
#include <iostream>
#include <list>

using namespace std;

int main() {

	list<const char*>rosen = { "田端","日暮里","西日暮里" };

	for (/*イテレータの定義*/ itr = rosen.begin();
		itr != rosen.end();
		itr++)
	{
		cout << *itr << endl;
	}

	return 0;
}


