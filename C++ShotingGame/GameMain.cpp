#include "GameMain.h"
#include "DxLib.h"
#include "Title.h"
#include "PadInput.h"

GameMain::GameMain()
{
	cimage = LoadGraph("images/Cimages/cimage.png");
	titlecursor = LoadGraph("images/Title/Target.png");

	cursor_num = 0;
	cursor_y = 0;
	interval = 0;
}

void GameMain::InputKey()
{
	
}

GameMain::~GameMain()
{
	DeleteGraph(cimage);
}

AbstractScene* GameMain::Update()
{
	//Bボタンでタイトルに戻る
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_B)) {

		return new Title();
	}

	MoveBall();
	InputKey();
	ChangeAngle();

	//更新処理
	if (KeyFlg & PAD_INPUT_M)
	{
		if (MenuNumber == 0)
		{
			return new GameMain();
		}
	}

	return this;
}

void GameMain::Draw()const
{	
	DrawGraph(0, 0, cimage, TRUE);
	DrawGraph(TITLEMODESELECT_X - 70, TITLEMODESELECT_Y - 20 + cursor_y, titlecursor, TRUE);

	SetFontSize(50);
	DrawString(200, 800, "武器を選択しよう",Cr);
	
	SetFontSize(20);
	DrawString(1080, 650, "Aボタンで決定",Cr);
	DrawString(1080, 690, "Bボタンで戻る",Cr);
}