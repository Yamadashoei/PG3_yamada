#include <iostream> 
#include <string> 
#include <chrono>   

int main() {
    // 100万文字の移動とコピー操作を比較
    std::cout << "100,000文字を移動とコピーで比較しました。" << std::endl;

    // 100万文字の文字列を作成
    std::string originalString(1000000, 'a');

    // コピー操作の計測
    auto copyStartTime = std::chrono::system_clock::now();
    std::string copiedString = originalString; // コピー
    auto copyEndTime = std::chrono::system_clock::now();

    // コピー時間を計算
    std::chrono::duration<double, std::micro> copyDuration = copyEndTime - copyStartTime;
    std::cout << "コピー操作時間: " << copyDuration.count() << "us" << std::endl;

    // 移動操作の計測
    std::string moveSource(1000000, 'a'); // 移動元の文字列を作成
    auto moveStartTime = std::chrono::system_clock::now();
    std::string movedString = std::move(moveSource); // 移動
    auto moveEndTime = std::chrono::system_clock::now();

    // 移動時間を計算
    std::chrono::duration<double, std::micro> moveDuration = moveEndTime - moveStartTime;
    std::cout << "移動操作時間: " << moveDuration.count() << "us" << std::endl;

    return 0;
}
