#ifndef GAME_H
#define GAME_H

#include <GL/glew.h>
#include <GLFW/glfw3.h>

enum GameState {
	GAME_ACTIVE,
	GAME_MENU,
	GAME_WIN
};

class Game
{
public:
	GameState		State;
	GLboolean		Keys[1024];
	//设备分辨率
	GLuint			Width, Height;

	Game(GLuint width, GLuint height);
	~Game();
	//加载着色器、纹理以及初始化游戏状态
	void Init();
	//使用存储在Keys数组里的数据来处理输入
	void ProcessInpute(GLfloat dt);
	//更新游戏设置状态（比如玩家/球的移动）
	void Update(GLfloat dt);
	//渲染游戏
	void Render();
};

#endif