#pragma once
#include "AbstractScene.h"

class Stage :
	public AbstractScene
{
private:
	

public:
    int Cr = (0xffffff);
    //コンストラクタ
    Stage();

    //デストラクタ
    ~Stage() final;

    //描画以外の更新を実行
    AbstractScene* Update() override;

    //描画に関することを実装
    void Draw() const override;
};

