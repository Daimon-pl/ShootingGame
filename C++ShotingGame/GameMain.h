#pragma once
#include "AbstractScene.h"
class GameMain : public AbstractScene
{
private:
	int cimage;
	int cursor_y;
	int titlecursor;

	int cursor_num;
	int interval;


	int Key;
	int mx = 640, my = 340;


public:

public:
	int Cr = (0xffffff);
	//�R���X�g���N�^
	GameMain();

	//�f�X�g���N�^
	~GameMain() final;

	//�`��ȊO�̍X�V�����s
	AbstractScene* Update() override;

	//�`��Ɋւ��邱�Ƃ�����
	void Draw() const override;

};

