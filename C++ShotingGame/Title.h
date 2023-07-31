#pragma once
#include "AbstractScene.h"

#define TITLEMODESELECT_X 530
#define TITLEMODESELECT_Y 186

class Title :
    public AbstractScene
{
private:
    int title;
    int titlecursor;
    int OldKey;
    int NowKey;
    int KeyFlg;
    int MenuNumber;

    int cursor_y;
    int cursor_num;
    int interval;
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

