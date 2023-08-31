#include "Enemy.h"
#include <math.h>
#include "DxLib.h"

Enemy::Enemy()
{
	enemy = LoadGraph("images/Enemy/Enemy.png");
}

Enemy::~Enemy()
{
	
}

AbstractScene* Enemy::Update()
{
	
	return this;
}

void Enemy::Draw()const
{
	
}