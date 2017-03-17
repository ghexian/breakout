#ifndef TEXTURE_H
#define TEXTURE_H

#include <GL/glew.h>

class Texture2D
{
public:
	GLuint ID;
	//纹理尺寸
	GLuint Width, Height;
	//纹理对象格式
	GLuint Internal_Format;
	//加载图像格式
	GLuint Image_Format;
	//S轴环绕模式
	GLuint Wrap_S;
	//T轴环绕模式
	GLuint Wrap_T;
	//如果纹理像素低于屏幕像素的过滤方式
	GLuint Filter_Min;
	//如果纹理像素高于屏幕像素的过滤方式
	GLuint Filter_Max;

	Texture2D();
	//生成纹理对象
	void Generate(GLuint width, GLuint height, unsigned char* data);
	//绑定
	void Bind() const;//const放在函数后表示这个函数是常成员函数，常成员函数是不能改变成员变量值的函数。
};

#endif