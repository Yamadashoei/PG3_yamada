#include <list>
#include <iostream>

using namespace std;

int main() {
    // 1970年のリスト
    list<const char*> lst_1970{
        "Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno", "Uguisudani",
        "Nippori", "Tabata", "Komagome", "Sugamo", "Otsuka", "Ikebukuro", "Mejiro",
        "Takadanobaba", "Sin-Okubo", "Shinjuku", "Yoyogi", "Harajuku", "Shibuya",
        "Ebisu", "Meguro", "Gotanda", "Osaki", "Sinagawa", "Tamachi", "Hamamatsucho",
        "Shimbashi", "Yurakucho"
    };

    // 2019年のリスト (1970年に西日暮里を追加)
    list<const char*> lst_2019 = lst_1970;
    for (auto it = lst_2019.begin(); it != lst_2019.end(); ++it) {
        if (*it == "Nippori") {
            lst_2019.insert(next(it), "Nishi-Nippori");
            break; // 一度追加したらループを終了
        }
    }

    // 2022年のリスト (2019年に高輪ゲートウェイを追加)
    list<const char*> lst_2022 = lst_2019;
    for (auto it = lst_2022.begin(); it != lst_2022.end(); ++it) {
        if (*it == "Tamachi") {
            lst_2022.insert(next(it), "Takanawa Gateway");
            break; // 一度追加したらループを終了
        }
    }

    // 1970年の駅名を表示
    cout << "1970年:" << endl;
    for (const auto& station : lst_1970) {
        cout << station << endl;
    }

    // 2019年の駅名を表示
    cout << "\n2019年:" << endl;
    for (const auto& station : lst_2019) {
        cout << station << endl;
    }

    // 2022年の駅名を表示
    cout << "\n2022年:" << endl;
    for (const auto& station : lst_2022) {
        cout << station << endl;
    }

    return 0;
}
