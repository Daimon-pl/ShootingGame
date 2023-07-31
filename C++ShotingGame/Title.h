#pragma once
#include "AbstractScene.h"

class Title :
    public AbstractScene
{
private:
    int title;
    int cursor;
public:
    int Cr = (0xffffff);
    //コンストラクタ
    Title();

    //デストラクタ
    ~Title() final;

    //描画以外の更新を実行
    AbstractScene* Update() override;

    //描画に関することを実装
    void Draw() const override;
};

