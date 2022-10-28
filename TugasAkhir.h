#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, 
		VBO, VAO, EBO, texture, 
		VBO2, VAO2, EBO2, texture2, 
		VBO3, VAO3, EBO3, texture3,
		VBO4, VAO4, EBO4, texture4,
		VBO5, VAO5, EBO5, texture5
		;
	float angle = 10;
	float movement = 0;
    float x = 0;
    float y = 0;
    int i = 0;
    float bezier[2][1000];
	float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow *window);
    void BuildColoredLine();
	void BuildColoredSmallBladeRotor();
	void BuildColoredBladeRotor();
	void BuildColoredShaftBlade();
	void BuildColoredBody();
	void BuildColoredSmallBody();
	void BuildColoredSmallShaftBlade();
	void BuildColoredPlane();
    void DrawHeli();
    void DrawColoredLine();
	void DrawColoredSmallBladeRotor();
	void DrawColoredBladeRotor();
	void DrawColoredShaftBlade();
	void DrawColoredBody();
	void DrawColoredSmallBody();
	void DrawColoredSmallShaftBlade();
	void DrawColoredPlane();

	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void RotateCamera(float speed);
	void InitCamera();
};

