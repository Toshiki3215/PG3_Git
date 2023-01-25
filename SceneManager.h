#pragma once
class SceneManager final
{
private:
	SceneManager();
	~SceneManager();

	enum Scene
	{
		title,
		newGame,
		gamePlay,
		gameClear
	};

public:
	SceneManager(const SceneManager&) = delete;

	SceneManager& operator = (const SceneManager&) = delete;

	static SceneManager* GetInstance();

	void ChangeScene(int sceneNo);
};