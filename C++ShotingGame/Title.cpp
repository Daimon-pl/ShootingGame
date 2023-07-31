#include "Title.h"
#include "DxLib.h"
#include "PadInput.h"
#include "GameMain.h"
#include "Ranking.h"
#include "GameEnd.h"
#include "Help.h"

#include <math.h>
#define _USE_MATH_DEFINES

Title::Title()
{
	title = LoadGraph("images/Title/title.png");
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

	if ((PAD_INPUT::GetLStick().ThumbY > MARGIN) && interval >= 70) {
		cursor_num--;
		interval = 0;
	}
	else if ((PAD_INPUT::GetLStick().ThumbY < -MARGIN) && interval >= 70) {
		cursor_num++;
		interval = 0;
	}

	if (cursor_num < 0)cursor_num = 3;
	if (cursor_num > 3)cursor_num = 0;

	if (cursor_num == 0 && PAD_INPUT::OnButton(XINPUT_BUTTON_A))
	{
		return new GameMain();
	}
	else if (cursor_num == 1 && PAD_INPUT::OnButton(XINPUT_BUTTON_A))
	{
		return new Ranking();
	}
	else if (cursor_num == 2 && PAD_INPUT::OnButton(XINPUT_BUTTON_A))
	{
		return new Help();
	}
	else if (cursor_num == 3 && PAD_INPUT::OnButton(XINPUT_BUTTON_A))
	{
		return new GameEnd();
	}

	return this;
}

void Title::Draw()const
{
	DrawGraph(0, 0, title, TRUE);
	DrawGraph(TITLEMODESELECT_X - 50, TITLEMODESELECT_Y - 20 + cursor_y, titlecursor, TRUE);
	DrawString(620, 196, "PLAY", Cr);
	DrawString(620, 290, "RANKING", Cr);
	DrawString(620, 383, "HELP", Cr);
	DrawString(620, 480, "END", Cr);
	SetFontSize(50);
}