#pragma once
#include "Module.h"
#include "Animation.h"
#include "Globals.h"
#include "p2Point.h"
#include "Integrator.h"

#define GRAVITY_Y = 9.8f;


struct Object
{
	SDL_Texture* graphic;
	uint fx;

	Object() : graphic(NULL)
	{}
};

class ModulePlayer : public Module
{
public:
	ModulePlayer(Application* app, bool start_enabled = true);
	virtual ~ModulePlayer();

	bool Start();
	update_status Update();
	bool CleanUp();

public:
	SDL_Texture* graphic;
	Application* app;
	Integrator integrator;
	float x;
	float y;
	float v_x;
	float v_y;
	float m;
	float force_x;
	float force_y;

	float secondsCounter;


};