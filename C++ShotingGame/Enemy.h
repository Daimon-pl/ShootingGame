#pragma once
#include "AbstractScene.h"

class Enemy :
    public AbstractScene
{
private:
    int enemy;


public:
    int Cr = (0xffffff);
    //コンストラクタ
    Enemy();

    //デストラクタ
    ~Enemy() final;

    //描画以外の更新を実行
    AbstractScene* Update() override;

    //描画に関することを実装
    void Draw() const override;
};

