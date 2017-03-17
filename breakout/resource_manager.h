#ifndef RESOURCE_MANAGER_H
#define RESOURCE_MANAGER_H

#include <map>
#include <string>
#include <GL/glew.h>
#include "texture.h"
#include "shader.h"

class ResourceManager
{
public:
	//着色器对象
	static std::map<std::string, Shader>	Shaders;
	//纹理对象
	static std::map<std::string, Texture2D>	Textures;
	//加载着色器
	static Shader LoadShader(const GLchar *vShaderFile, const GLchar *fShaderFile, const GLchar *gShaderFile, std::string name);
	//获取着色器
	static Shader GetShader(std::string name);
	//加载纹理
	static Texture2D LoadTexture(const GLchar *file, GLboolean alpha, std::string name);
	//获取纹理
	static Texture2D GetTexture(std::string name);
	static void Clear();
private:
	ResourceManager() {}
	//加载着色器文件
	static Shader loadShaderFromFile(const GLchar *vShaderFile, const GLchar *fShaderFile, const GLchar *gShaderFile = nullptr);
	//加载纹理文件
	static Texture2D loadTextureFromFile(const GLchar *file, GLboolean alpha);
};

#endif