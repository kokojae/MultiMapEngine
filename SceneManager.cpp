#include "DXUT.h"
#include "SceneManager.h"
#include "MultiMapEngine.h"

SceneManager::Scene SceneManager::currentScene = SceneManager::Scene();

void SceneManager::LoadScene(Scene scene)
{
	currentScene = scene;

	Camera::position = { 0,0 };
	Camera::degree = 0;
	Camera::scale = 1;

	ObjectManager::Clear();
	SoundManager::EndAllSFX();

	switch (scene)
	{
	case SceneManager::Scene::MAIN:
		SoundManager::PlaySFX(L"Source/test.wav", true);

		ObjectManager::Instantiate<Text>({ 0,300 })->SetText(L"����Ű �̵� WASD ī�޶� ����\n���̵� �����̽���", { 0.5,0.5 });

		ObjectManager::Instantiate<Block>({ 0,200 });
		ObjectManager::Instantiate<Block>({ 100,200 });
		ObjectManager::Instantiate<Block>({ 200,200 });
		ObjectManager::Instantiate<Block>({ 300,100 });
		ObjectManager::Instantiate<Block>({ 400,200 });
		ObjectManager::Instantiate<Block>({ -100,100 });
		ObjectManager::Instantiate<Block>({ 0,-100 });;

		ObjectManager::Instantiate<Player>();
	break;	default:
		break;
	}
}
