#include "Title.h"
#include "DxLib.h"
#include "PadInput.h"
#include "GameMain.h"
#include "Ranking.h"
#include "Help.h"

#include <math.h>
#define _USE_MATH_DEFINES

Title::Title()
{
	title = LoadGraph("images/Title/title3.png");
	titlecursor = LoadGraph("images/Title/Target.png");

	cursor_num = 0;
	cursor_y = 0;
	interval = 0;
}

Title::~Title()
{
	DeleteGraph(title);
	DeleteGraph(titlecursor);
}

AbstractScene* Title::Update()
{
	cursor_y = cursor_num * 96;
	if (interval < 70) {
		interval++;
	}


	if ((PAD_INPUT::GetLStick().ThumbY > MARGIN || CheckHitKey(KEY_INPUT_W)) && interval >= 70) {
		cursor_num--;
		interval = 0;
	}
	else if ((PAD_INPUT::GetLStick().ThumbY < -MARGIN || CheckHitKey(KEY_INPUT_S)) && interval >= 70) {
		cursor_num++;
		interval = 0;
	}

	if (PAD_INPUT::OnButton(XINPUT_BUTTON_DPAD_DOWN))
	{
		if (cursor_num < 4)++cursor_num;
		else --cursor_num = 0;
	}
	else if (PAD_INPUT::OnButton(XINPUT_BUTTON_DPAD_UP))
	{
		if (cursor_num > 0)--cursor_num;
		else ++cursor_num = 4;
	}

	if (cursor_num < 0)cursor_num = 3;
	if (cursor_num > 3)cursor_num = 0;

	if (PAD_INPUT::OnButton(XINPUT_BUTTON_A)) {

		//ステージセレクト画面に行く
		if (cursor_num == 0)
		{
			return new GameMain();
		}
		if (cursor_num == 1) {
			return new Ranking();
		}
		if (cursor_num == 2) {
			return new Help();
		}
		if (cursor_num == 3) {
			return nullptr;
		}
	}

	return this;
}

void Title::Draw()const
{
	DrawGraph(0, 0, title, TRUE);
	DrawGraph(TITLEMODESELECT_X - 70, TITLEMODESELECT_Y - 20 + cursor_y, titlecursor, TRUE);
	SetFontSize(50);
	DrawString(580, 196, "PLAY", Cr);
	DrawString(580, 290, "RANKING", Cr);
	DrawString(580, 383, "HELP", Cr);
	DrawString(580, 480, "END", Cr);
	SetFontSize(20);
	DrawString(1080, 650, "Aボタンで決定", Cr);
	DrawString(1080, 690, "Bボタンで戻る", Cr);
}