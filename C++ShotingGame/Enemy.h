#pragma once
#include "AbstractScene.h"

class Enemy :
    public AbstractScene
{
private:
    int enemy;


public:
    int Cr = (0xffffff);
    //�R���X�g���N�^
    Enemy();

    //�f�X�g���N�^
    ~Enemy() final;

    //�`��ȊO�̍X�V�����s
    AbstractScene* Update() override;

    //�`��Ɋւ��邱�Ƃ�����
    void Draw() const override;
};

