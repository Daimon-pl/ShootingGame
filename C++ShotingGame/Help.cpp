#include "Help.h"
#include "DxLib.h"
#include "Title.h"

Help::Help()
{

}


Help::~Help()
{

}

AbstractScene* Help::Update()
{
	return this;
}

void Help::Draw() const
{
	DrawString(560, 330, "Help", Cr);
}