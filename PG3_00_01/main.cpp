#include <stdio.h>

using namespace std;

// テンプレートクラス Min: 2つの異なる型の値を比較し、大きい値を返すクラス
template<typename T1, typename T2>
class Min {
public:
    T1 value1; // 1つ目の値
    T2 value2; // 2つ目の値

    // コンストラクタ: 2つの値を初期化
    Min(T1 val1, T2 val2) : value1(val1), value2(val2) {}

    // 大きい値を返すメンバ関数
    T1 getMax() {
        if (value1 > value2) {
            return static_cast<T1>(value1);
        }
        else {
            return static_cast<T1>(value2);
        }
    }
};

int main(void) {
    // 同じ型の比較例
    Min<int, int> answerInt(1, 2); // int型の比較
    Min<float, float> answerFloat(4.5f, 4.2f); // float型の比較
    Min<double, double> answerDouble(1.0, 1.2); // double型の比較

    // 結果を出力
    printf("%d\n", answerInt.getMax()); // int型
    printf("%0.1f\n", answerFloat.getMax()); // float型
    printf("%0.1f\n", answerDouble.getMax()); // double型

    // 異なる型の比較例
    Min<float, int> exampleMixed1(23.4f, 23); // float と int 型の比較
    Min<float, double> exampleMixed2(20.01f, 20.05); // float と double 型の比較
    Min<double, int> exampleMixed3(10.99, 11); // double と int 型の比較

    // 結果を出力
    printf("%0.1f\n", exampleMixed1.getMax()); // float型で出力
    printf("%0.2f\n", exampleMixed2.getMax()); // float型で出力
    printf("%0.1f\n", exampleMixed3.getMax()); // float型で出力

    return 0;
}
