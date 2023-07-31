#include "GameEnd.h"
#include "DxLib.h"
#include "Title.h"

GameEnd::GameEnd()
{

}


GameEnd::~GameEnd()
{

}

AbstractScene* GameEnd::Update()
{
	return this;
}

void GameEnd::Draw() const
{
	DrawString(560, 330, "GameEnd", Cr);
}