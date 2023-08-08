#include "Ranking.h"
#include "DxLib.h"
#include "Title.h"
#include "PadInput.h"

Ranking::Ranking()
{
	cimage = LoadGraph("images/Cimages/cimage.png");
}


Ranking::~Ranking()
{
	DeleteGraph(cimage);
}

AbstractScene* Ranking::Update()
{
	//Bボタンでタイトルに戻る
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_B)) {

		return new Title();
	}

	return this;
}

void Ranking::Draw() const
{
	DrawGraph(0, 0, cimage, TRUE);
	SetFontSize(50);

	DrawString(560, 330, "Ranking", Cr);
	SetFontSize(20);
	DrawString(1080, 690, "Bボタンで戻る", Cr);
}
