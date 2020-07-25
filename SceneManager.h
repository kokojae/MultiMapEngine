#pragma once
class SceneManager
{
public:
	enum class Scene { MAIN };

	static Scene currentScene;

	static void LoadScene(Scene scene);
};

