#include "GameMain.h"
#include "DxLib.h"
#include "Title.h"
#include "PadInput.h"

GameMain::GameMain()
{
	//cimage = LoadGraph("images/Cimages/cimage.png");

}


GameMain::~GameMain()
{
	DeleteGraph(cimage);
}

AbstractScene* GameMain::Update()
{
	//B�{�^���Ń^�C�g���ɖ߂�
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_B)) {

		return new Title();
	}

	cursor_y = cursor_num * 96;
	if (interval < 70) {
		interval++;
	}


	// �L�[���͎擾
	Key = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	// ��������Ă������ɐi��
	if (Key & PAD_INPUT_UP) my -= 1;
	// ���������Ă����牺�ɐi��
	if (Key & PAD_INPUT_DOWN) my += 1;
	// �E�������Ă�����E�ɐi��
	if (Key & PAD_INPUT_RIGHT) mx += 1;
	// ���������Ă����獶�ɐi��
	if (Key & PAD_INPUT_LEFT) mx -= 1;
	if (mx < 0) mx = 0;
	if (mx > 1280 - 19) mx = 1280 - 19;
	if (my < 0) my = 0;
	if (my > 740 - 39) my = 740	 - 39;

	return this;
}

void GameMain::Draw()const
{	
	//DrawGraph(0, 0, cimage, TRUE);

	DrawString(mx, my, "��", Cr);
	DrawFormatString(0, 0, 0x00FFFF, "x %d y%d", mx, my);   //���W


	SetFontSize(20);
	DrawString(1080, 650, "A�{�^���Ō���",Cr);
	DrawString(1080, 690, "B�{�^���Ŗ߂�",Cr);
}