#pragma once
#include "AbstractScene.h"

class Ranking : public AbstractScene
{
private:
	int cimage;

public:
	int Cr = (0xffffff);

	//コンストラクタ
	Ranking();

	//デストラクタ
	~Ranking() final;

	//描画以外の更新を実行
	AbstractScene* Update() override;

	//描画に関することを実装
	void Draw() const override;

};

