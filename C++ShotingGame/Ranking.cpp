#include "Ranking.h"
#include "DxLib.h"
#include "Title.h"

Ranking::Ranking()
{

}


Ranking::~Ranking()
{

}

AbstractScene* Ranking::Update()
{
	return this;
}

void Ranking::Draw() const
{
	DrawString(560, 330, "Ranking", Cr);
}
