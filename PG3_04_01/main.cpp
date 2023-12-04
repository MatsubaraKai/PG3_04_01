#include <Novice.h>
#include "Player/Player.h"
#include "InputHandle/InputHandle.h"
#include "Command/ICommand/ICommand.h"

const char kWindowTitle[] = "PG3_04_01";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	// キー入力結果を受け取る箱
	char keys[256] = { 0 };
	char preKeys[256] = { 0 };

	//変数
	InputHandle* inputHandle_ = new InputHandle();
	inputHandle_->AssignMoveLeftCommand2PressKeyA();
	inputHandle_->AssignMoveLeftCommand2PressKeyD();
	inputHandle_->AssignMoveLeftCommand2PressKeyW();
	inputHandle_->AssignMoveLeftCommand2PressKeyS();
	ICommand* command_ = nullptr;
	Player* player_ = new Player();
	player_->Initialize();

	// ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();

		// キー入力を受け取る
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);

		command_ = inputHandle_->HandleInput();

		if (command_) {
			command_->Execution(*player_);
		}

		player_->Update();

		player_->Draw();


		// フレームの終了
		Novice::EndFrame();
		// ESCキーが押されたらループを抜ける
		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
			break;
		}
	}

	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
