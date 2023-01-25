#include "SceneManager.h"
#include <stdio.h>

SceneManager::SceneManager() 
{

}

SceneManager::~SceneManager() 
{

}

SceneManager* SceneManager::GetInstance()
{
	static SceneManager instance;

	return &instance;

}

void SceneManager::ChangeScene(int sceneNo)
{
	switch (sceneNo)
	{
	case title:
		printf("SceneNo : 0\n");
		printf("Title\n");

		break;

	case newGame:
		printf("SceneNo : 1\n");
		printf("NewGame\n");

		break;

	case gamePlay:
		printf("SceneNo : 2\n");
		printf("GemaPlay\n");

		break;

	case gameClear:
		printf("SceneNo : 3\n");
		printf("GemaClear\n");

		break;

	default:
		break;

	}
}