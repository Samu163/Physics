#include "Globals.h"
#include "Application.h"
#include "ModulePlayer.h"



ModulePlayer::ModulePlayer(Application* app, bool start_enabled) : Module(app, start_enabled)
{
	this->app = app;
	x = 0;
	y = 400;
	v_x = 3;
	v_y = -2;
	m = 10;
	force_x = 0;
	force_y = 9.8f;
	secondsCounter = 1 / 60;
}

ModulePlayer::~ModulePlayer()
{}

// Load assets
bool ModulePlayer::Start()
{
	graphic = app->textures->Load("Assets/Sprites/player.png");
	LOG("Loading player");
	return true;
}

// Unload assets
bool ModulePlayer::CleanUp()
{
	LOG("Unloading player");

	return true;
}

// Update: draw background
update_status ModulePlayer::Update()
{


	app->renderer->Blit(graphic, x, y);
	
	//Implicit euler
	/*x = integrator.ImplicitEuler(x, v_x, force_x / m, secondsCounter);
	y = integrator.ImplicitEuler(y, v_y, force_y / m, secondsCounter);*/
	
	
    //x = integrator.VelocityVerlet(x, v_x, force_x / m, secondsCounter);
	//y = integrator.VelocityVerlet(y, v_y, force_y / m, secondsCounter);
	

	/*x = integrator.StormetVerlet(x, v_x, force_x / m, secondsCounter);
	y = integrator.StormetVerlet(y, v_y, force_y / m, secondsCounter);*/
	secondsCounter += (float)1 / 60;

	
	
	return UPDATE_CONTINUE;
}



