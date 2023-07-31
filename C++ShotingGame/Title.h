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
    //�R���X�g���N�^
    Title();

    //�f�X�g���N�^
    ~Title() final;

    //�`��ȊO�̍X�V�����s
    AbstractScene* Update() override;

    //�`��Ɋւ��邱�Ƃ�����
    void Draw() const override;
};

