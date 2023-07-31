#include "Title.h"
#include "DxLib.h"

Title::Title()
{
	title = LoadGraph("images/Title/test.png");
}

Title::~Title()
{
	DeleteGraph(title);
}

AbstractScene* Title::Update()
{
	return this;
}

void Title::Draw()const
{
	DrawGraph(0, 0, title, TRUE);
}