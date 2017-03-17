#ifndef TEXTURE_H
#define TEXTURE_H

#include <GL/glew.h>

class Texture2D
{
public:
	GLuint ID;
	//����ߴ�
	GLuint Width, Height;
	//��������ʽ
	GLuint Internal_Format;
	//����ͼ���ʽ
	GLuint Image_Format;
	//S�ỷ��ģʽ
	GLuint Wrap_S;
	//T�ỷ��ģʽ
	GLuint Wrap_T;
	//����������ص�����Ļ���صĹ��˷�ʽ
	GLuint Filter_Min;
	//����������ظ�����Ļ���صĹ��˷�ʽ
	GLuint Filter_Max;

	Texture2D();
	//�����������
	void Generate(GLuint width, GLuint height, unsigned char* data);
	//��
	void Bind() const;//const���ں������ʾ��������ǳ���Ա����������Ա�����ǲ��ܸı��Ա����ֵ�ĺ�����
};

#endif