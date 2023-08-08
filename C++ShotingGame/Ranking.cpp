#include "Ranking.h"
#include "DxLib.h"
#include "Title.h"
#include "PadInput.h"

Ranking::Ranking()
{

}


Ranking::~Ranking()
{

}

AbstractScene* Ranking::Update()
{
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_B)) {

		return new Title();
	}

	return this;
}

void Ranking::Draw() const
{
	DrawString(560, 330, "Ranking", Cr);
}
