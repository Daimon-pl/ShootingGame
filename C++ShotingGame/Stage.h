#pragma once
#include "AbstractScene.h"

class Stage :
	public AbstractScene
{
private:
	

public:
    int Cr = (0xffffff);
    //�R���X�g���N�^
    Stage();

    //�f�X�g���N�^
    ~Stage() final;

    //�`��ȊO�̍X�V�����s
    AbstractScene* Update() override;

    //�`��Ɋւ��邱�Ƃ�����
    void Draw() const override;
};

