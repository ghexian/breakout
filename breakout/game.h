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
	//�豸�ֱ���
	GLuint			Width, Height;

	Game(GLuint width, GLuint height);
	~Game();
	//������ɫ���������Լ���ʼ����Ϸ״̬
	void Init();
	//ʹ�ô洢��Keys���������������������
	void ProcessInpute(GLfloat dt);
	//������Ϸ����״̬���������/����ƶ���
	void Update(GLfloat dt);
	//��Ⱦ��Ϸ
	void Render();
};

#endif