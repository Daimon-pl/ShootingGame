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
    //�R���X�g���N�^
    Title();

    //�f�X�g���N�^
    ~Title() final;

    //�`��ȊO�̍X�V�����s
    AbstractScene* Update() override;

    //�`��Ɋւ��邱�Ƃ�����
    void Draw() const override;
};

