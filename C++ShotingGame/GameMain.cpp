#include "GameMain.h"
#include "DxLib.h"
#include "Title.h"
#include "PadInput.h"

GameMain::GameMain()
{
	cimage = LoadGraph("images/Cimages/cimage.png");

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

	return this;
}

void GameMain::Draw()const
{	
	DrawGraph(0, 0, cimage, TRUE);
	
	SetFontSize(20);
	DrawString(1080, 650, "Aボタンで決定",Cr);
	DrawString(1080, 690, "Bボタンで戻る",Cr);
}