#pragma once
#include "AbstractScene.h"

class Ranking : public AbstractScene
{
private:
	int cimage;

public:
	int Cr = (0xffffff);

	//�R���X�g���N�^
	Ranking();

	//�f�X�g���N�^
	~Ranking() final;

	//�`��ȊO�̍X�V�����s
	AbstractScene* Update() override;

	//�`��Ɋւ��邱�Ƃ�����
	void Draw() const override;

};

