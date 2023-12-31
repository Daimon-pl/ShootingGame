#pragma once
#include "AbstractScene.h"

class Help : public AbstractScene
{
private:
	int cimage;
	int PAD;

public:
	int Cr = (0xffffff);

	//コンストラクタ
	Help();


	//デストラクタ
	~Help() final;


	//描画以外の更新を実行
	AbstractScene* Update() override;


	//描画に関することを実装
	void Draw() const override;
};

