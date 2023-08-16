#include "Help.h"
#include "DxLib.h"
#include "Title.h"
#include "PadInput.h"

Help::Help()
{
	cimage = LoadGraph("images/Cimages/cimage.png");
	PAD = LoadGraph("images/Help/PAD2.png");
}


Help::~Help()
{
	DeleteGraph(cimage);
}

AbstractScene* Help::Update()
{
	//Bボタンでタイトルに戻る
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_B)) {

		return new Title();
	}

	return this;
}

void Help::Draw() const
{
	DrawGraph(0, 0, cimage, TRUE);
	DrawGraph(0, 100, PAD, TRUE);
	SetFontSize(20);
	DrawString(1080, 690, "Bボタンで戻る", Cr);
}