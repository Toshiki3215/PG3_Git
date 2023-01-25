#pragma once

enum Scene
{
	title,
	newGame,
	gamePlay,
	gameClear
};

class SceneManager final
{
private:
	SceneManager();
	~SceneManager();

public:
	SceneManager(const SceneManager&) = delete;

	SceneManager& operator = (const SceneManager&) = delete;

	static SceneManager* GetInstance();

	void ChangeScene(int sceneNo);
};