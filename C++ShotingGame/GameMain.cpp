#include "GameMain.h"
#include "DxLib.h"
#include "Title.h"
#include "PadInput.h"

GameMain::GameMain()
{
	//cimage = LoadGraph("images/Cimages/cimage.png");

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

	return this;
}

void GameMain::Draw()const
{	
	//DrawGraph(0, 0, cimage, TRUE);


	DrawString(640, 340, "●", Cr);
	//DrawFormatString(470, 0, 0x00FFFF, "x %d y%d", mx, my);//座標
	
	SetFontSize(20);
	DrawString(1080, 650, "Aボタンで決定",Cr);
	DrawString(1080, 690, "Bボタンで戻る",Cr);
}