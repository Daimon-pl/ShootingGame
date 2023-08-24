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


	// キー入力取得
	Key = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	// 上を押していたら上に進む
	if (Key & PAD_INPUT_UP) my -= 1;
	// 下を押していたら下に進む
	if (Key & PAD_INPUT_DOWN) my += 1;
	// 右を押していたら右に進む
	if (Key & PAD_INPUT_RIGHT) mx += 1;
	// 左を押していたら左に進む
	if (Key & PAD_INPUT_LEFT) mx -= 1;
	if (mx < 0) mx = 0;
	if (mx > 1280 - 19) mx = 1280 - 19;
	if (my < 0) my = 0;
	if (my > 740 - 39) my = 740	 - 39;

	return this;
}

void GameMain::Draw()const
{	
	//DrawGraph(0, 0, cimage, TRUE);

	DrawString(mx, my, "●", Cr);
	DrawFormatString(0, 0, 0x00FFFF, "x %d y%d", mx, my);   //座標


	SetFontSize(20);
	DrawString(1080, 650, "Aボタンで決定",Cr);
	DrawString(1080, 690, "Bボタンで戻る",Cr);
}