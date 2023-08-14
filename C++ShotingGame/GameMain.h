#pragma once
#include "AbstractScene.h"
class GameMain : public AbstractScene
{
private:
	int cimage;
	int cursor_y;
	int titlecursor;

	int cursor_num;
	int interval;

	void ChangeAngle();		//角度変更処理
	void InputKey();		//キー入力
	void MoveBall();		//ボールの移動処理
	void GameInit();		//ゲーム初期化処理

	int KeyFlg;
	int MenuNumber;


public:
	int Cr = (0xffffff);
	//コンストラクタ
	GameMain();

	//デストラクタ
	~GameMain() final;

	//描画以外の更新を実行
	AbstractScene* Update() override;

	//描画に関することを実装
	void Draw() const override;

};

