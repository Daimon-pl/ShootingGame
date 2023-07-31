#include "Title.h"
#include "DxLib.h"

Title::Title()
{
	title = LoadGraph("images/Title/title.png");
	cursor = LoadGraph("images/Title/Target.png");
}

Title::~Title()
{
	DeleteGraph(title);
	DeleteGraph(cursor);
}

AbstractScene* Title::Update()
{
	return this;
}

void Title::Draw()const
{
	DrawGraph(0, 0, title, TRUE);
	DrawGraph(480, 210, cursor, TRUE);
	DrawString(620, 240, "PLAY", Cr);
	DrawString(620, 340, "RANKING", Cr);
	DrawString(620, 440, "END", Cr);
	SetFontSize(50);
}