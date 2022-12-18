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
	GLuint depthmapShader, shadowmapShader, cubeVBO, cubeVAO, cubeEBO, cube_texture, cube_texture2, cube_texture3, cube_texture4, cube_texture5, cube_texture6, cube_texture7, cube_texture8, cube_texture9, planeVBO, planeVAO, planeEBO, plane_texture, stexture, stexture2, depthMapFBO, depthMap;

	float angle = 0;
	float perosotan = 0.5f;
	int state = 0;
	float humanX, humanZ, i, humanRot, legRot;
	float movement = 0;
	bool dir = true;
	float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy;
	const unsigned int SHADOW_WIDTH = 1024, SHADOW_HEIGHT = 1024;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow *window);

	//Build
	void BuildTexturedPlane();
	void BuildDepthMap();
	void BuildShaders();

	void BuildTextured();
	void BuildTextured2();
	void BuildTextured3();
	void BuildTextured4();
	void BuildTextured5();
	void BuildTextured6();
	void BuildTextured7();
	void BuildTextured8();
	void BuildTextured9();


	//Draw
//Jungkat Jungkit
	void DrawJungkatJungkit1(GLuint shader);
	void DrawJungkatJungkit2(GLuint shader);
	void DrawJungkatJungkit3(GLuint shader);
	void DrawJungkatJungkit4(GLuint shader);
	void DrawJungkatJungkit5(GLuint shader);
	void DrawJungkatJungkit6(GLuint shader);

	//Ayunan
	void DrawAyunan(GLuint shader);
	void DrawAyunan2(GLuint shader);
	void DrawAyunan3(GLuint shader);
	void DrawAyunan4(GLuint shader);
	void DrawAyunan5(GLuint shader);
	void DrawAyunan6(GLuint shader);

	//Perosotan
	void DrawPerosotan1(GLuint shader);
	void DrawPerosotan2(GLuint shader);
	void DrawPerosotan3(GLuint shader);
	void DrawPerosotan4(GLuint shader);
	void DrawPerosotan5(GLuint shader);
	void DrawPerosotan6(GLuint shader);
	void DrawPerosotan7(GLuint shader);
	void DrawPerosotan8(GLuint shader);
	void DrawPerosotan9(GLuint shader);
	void DrawPerosotan10(GLuint shader);
	void DrawPerosotan11(GLuint shader);
	void DrawPerosotan12(GLuint shader);
	void DrawPerosotan13(GLuint shader);
	void DrawPerosotan14(GLuint shader);
	void DrawPerosotan15(GLuint shader);
	void DrawPerosotan16(GLuint shader);

	//KotakPasir
	void DrawSandbox1(GLuint shader);
	void DrawSandbox2(GLuint shader);
	void DrawSandbox3(GLuint shader);
	void DrawSandbox4(GLuint shader);
	void DrawSandbox5(GLuint shader);

	//KotakPasir
	void DrawPagar1(GLuint shader);
	void DrawPagar2(GLuint shader);
	void DrawPagar3(GLuint shader);
	void DrawPagar4(GLuint shader);
	void DrawPagar5(GLuint shader);
	void DrawPagar6(GLuint shader);
	void DrawPagar7(GLuint shader);
	void DrawPagar8(GLuint shader);
	void DrawPagar9(GLuint shader);
	void DrawPagar10(GLuint shader);
	void DrawPagar11(GLuint shader);
	void DrawPagar12(GLuint shader);
	void DrawPagar13(GLuint shader);
	void DrawPagar14(GLuint shader);
	void DrawPagar15(GLuint shader);
	void DrawPagar16(GLuint shader);
	void DrawPagar17(GLuint shader);



	//Human
	void DrawHuman1(GLuint shader);
	void DrawHuman2(GLuint shader);
	void DrawHuman3(GLuint shader);
	void DrawHuman4(GLuint shader);
	void DrawHuman5(GLuint shader);
	void DrawHuman6(GLuint shader);
	void DrawHuman7(GLuint shader);
	void DrawHuman8(GLuint shader);
	void DrawHuman9(GLuint shader);
	void DrawHuman10(GLuint shader);
	void DrawHuman11(GLuint shader);

	void DrawHumanA1(GLuint shader);
	void DrawHumanA2(GLuint shader);
	void DrawHumanA3(GLuint shader);
	void DrawHumanA4(GLuint shader);
	void DrawHumanA5(GLuint shader);
	void DrawHumanA6(GLuint shader);
	void DrawHumanA7(GLuint shader);
	void DrawHumanA8(GLuint shader);
	void DrawHumanA9(GLuint shader);
	void DrawHumanA10(GLuint shader);
	void DrawHumanA11(GLuint shader);

	void DrawHumanB1(GLuint shader);
	void DrawHumanB2(GLuint shader);
	void DrawHumanB3(GLuint shader);
	void DrawHumanB4(GLuint shader);
	void DrawHumanB5(GLuint shader);
	void DrawHumanB6(GLuint shader);
	void DrawHumanB7(GLuint shader);
	void DrawHumanB8(GLuint shader);
	void DrawHumanB9(GLuint shader);
	void DrawHumanB10(GLuint shader);
	void DrawHumanB11(GLuint shader);

	void DrawHumanC1(GLuint shader);
	void DrawHumanC2(GLuint shader);
	void DrawHumanC3(GLuint shader);
	void DrawHumanC4(GLuint shader);
	void DrawHumanC5(GLuint shader);
	void DrawHumanC6(GLuint shader);
	void DrawHumanC7(GLuint shader);
	void DrawHumanC8(GLuint shader);
	void DrawHumanC9(GLuint shader);
	void DrawHumanC10(GLuint shader);
	void DrawHumanC11(GLuint shader);

	void DrawHumanD1(GLuint shader);
	void DrawHumanD2(GLuint shader);
	void DrawHumanD3(GLuint shader);
	void DrawHumanD4(GLuint shader);
	void DrawHumanD5(GLuint shader);
	void DrawHumanD6(GLuint shader);
	void DrawHumanD7(GLuint shader);
	void DrawHumanD8(GLuint shader);
	void DrawHumanD9(GLuint shader);
	void DrawHumanD10(GLuint shader);
	void DrawHumanD11(GLuint shader);

	void DrawTexturedPlane(GLuint shader);


	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void MoveVerCamera(float speed);
	void RotateCamera(float speed);
	void InitCamera();
	void InitPos();
};

