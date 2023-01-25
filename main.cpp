#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include"SceneManager.h"

int main() {
	//インスタンスを取得してすぐ使用
	SceneManager* sceneManager = SceneManager::GetInstance();

	int sceneNo = 0;


	while (true) {

		sceneManager->ChangeScene(sceneNo);

		if (sceneNo >= 4) {

			sceneNo = 0;
		}
		else {

			sceneNo++;
		}

		Sleep(1 * 1000);

	}


	system("pause");
	return 0;
}