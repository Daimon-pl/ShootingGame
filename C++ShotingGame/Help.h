#pragma once
#include "AbstractScene.h"

class Help : public AbstractScene
{
private:

public:
	int Cr = (0xffffff);

	//�R���X�g���N�^
	Help();


	//�f�X�g���N�^
	~Help() final;


	//�`��ȊO�̍X�V�����s
	AbstractScene* Update() override;


	//�`��Ɋւ��邱�Ƃ�����
	void Draw() const override;
};

