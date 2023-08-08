#include "Help.h"
#include "DxLib.h"
#include "Title.h"
#include "PadInput.h"

Help::Help()
{

}


Help::~Help()
{

}

AbstractScene* Help::Update()
{
	if (PAD_INPUT::OnButton(XINPUT_BUTTON_B)) {

		return new Title();
	}

	return this;
}

void Help::Draw() const
{
	DrawString(560, 330, "Help", Cr);
}