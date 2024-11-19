#include <iostream>
using namespace std;


// 自作クラス
class MyClass {
public:
	void /*更新関数*/();
	void /*状態関数1*/();
	void /*状態関数2*/();
	void /*状態関数3*/();

	// メンバ関数ポインタのテーブル
	static void (MyClass::* table[])();

private:
	// メンバ関数ポインタのテーブルを参照するインデックス
	int index = 0;
};

void MyClass::/*状態関数1*/() {
	cout << "敵の接近！" << endl;
}

void MyClass::/*状態関数2*/() {
	cout << "敵の攻撃！" << endl;
}

void MyClass::/*状態関数2*/() {
	cout << "敵の離脱！" << endl;
}

void MyClass::/*更新関数*/() {

	// 関数ポインタのテーブルから関数を実行
	(this->*table[index])();

	if (/*scanfでゼロが入力された？*/) {
		/*敵の状態（関数ポインタ配列のインデックス）を+1*/
		/*インデックスが配列の最後の要素ならゼロを入れる*/
	}
	else {
		/*ゼロ以外の入力ならインデックスを更新せずに同じ行動を繰り返す*/
	}
}

// static宣言したメンバ関数ポインタテーブルの実体
void (MyClass::* MyClass::table[])() = {
  &MyClass::/*状態関数1*/,	// インデックス番号0
  &MyClass::/*状態関数2*/,	// インデックス番号1
  &MyClass::/*状態関数3*/	// インデックス番号2
};


int main()
{
	MyClass my;

	my./*更新関数*/();

	return 0;
}