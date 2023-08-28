#include "Stage.h"
#include <math.h>
#include "DxLib.h"

Stage::Stage()
{

}

Stage::~Stage()
{

}

AbstractScene* Stage::Update()
{

	return this;
}

void Stage::Draw() const
{
	DrawBox(40, 40, 400, 60, Cr, TRUE);
	DrawBox(40, 80, 400, 120, Cr, TRUE);
	DrawBox(40, 120, 400, 180, Cr, TRUE);
	DrawBox(40, 160, 400, 240, Cr, TRUE);
}
