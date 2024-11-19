#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	vector<string>meibo = {/*添付の学生番号配列*/ };

	cout << "全要素を表示します(ソート前)" << endl;

	// 全要素を表示
	for (int i = 0; i < meibo.size(); i++)
	{
		cout << meibo[i] << endl;
	}

	// 昇順に並べ替え
	cout << endl << "全要素をソートします" << endl << endl;

	sort(/*meiboの初めから最後までをソート*/);

	cout << "全要素を表示します(ソート後)" << endl;

	// 全要素を表示
	for (int i = 0; i < meibo.size(); i++)
	{
		cout << meibo[i] << endl;
	}

	return 0;
}


