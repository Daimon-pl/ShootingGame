#pragma once
#include "AbstractScene.h"]

class GameEnd : public AbstractScene
{
private:

public:
	int Cr = (0xffffff);

	//�R���X�g���N�^
	GameEnd();

	//�f�X�g���N�^
	~GameEnd();

	//�`��ȊO�̍X�V�����s
	AbstractScene* Update() override;

	//�`��Ɋւ��邱�Ƃ�����
	void Draw() const override;

};

