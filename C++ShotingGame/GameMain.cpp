#include "GameMain.h"
#include "DxLib.h"
#include "Title.h"
#include "PadInput.h"

GameMain::GameMain()
{

}

GameMain::~GameMain()
{

}

AbstractScene* GameMain::Update()
{
	return this;
}

void GameMain::Draw()const
{
	DrawString(560, 330, "GameMain",Cr);
}