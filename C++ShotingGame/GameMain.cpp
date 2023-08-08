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
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_B)) {

		return new Title();
	}

	return this;
}

void GameMain::Draw()const
{
	DrawString(560, 330, "GameMain",Cr);
}