#include <iostream>
#include <ara/sm/sm_client.h>  // ara::sm::StateClientのヘッダ

int main() {
    // StateClientを生成して、特定のアプリケーション状態を管理する
    ara::sm::StateClient stateClient("MyApplication");

    try {
        // アプリケーションの状態を「Running」に変更
        stateClient.ReportState(ara::sm::State::kRunning);
        std::cout << "アプリケーションの状態をRunningに設定しました。" << std::endl;
    } catch (const ara::core::ErrorCode& error) {
        std::cerr << "状態の変更中にエラーが発生しました: " << error.Message() << std::endl;
    }

    // アプリケーションがRunning状態にあるか確認
    if (stateClient.GetState() == ara::sm::State::kRunning) {
        std::cout << "現在の状態はRunningです。" << std::endl;
    } else {
        std::cout << "現在の状態はRunningではありません。" << std::endl;
    }

    return 0;
}