#include "SceneManager.h"
#include "DxLib.h"

AbstractScene* SceneManager::Update()
{
	AbstractScene* NextScene;
	try
	{
		NextScene = mScene->Update();
	}
	catch (const char* err)
	{
		FILE* fp = NULL;

		DATEDATA data;

		GetDateTime(&data);

		return nullptr;
	}

	if (NextScene != mScene)
	{
		delete mScene;
		mScene = NextScene;
	}
	return mScene;
}
void SceneManager::Draw() const
{
	mScene->Draw();
}

