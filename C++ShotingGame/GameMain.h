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


	int Key;
	int mx = 640, my = 340;


public:

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

