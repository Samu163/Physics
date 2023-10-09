#pragma once
#include "Module.h"
#include "Integrator.h"
#include "Globals.h"


class Integrator;
class ModulePhysics : public Module
{
public:
	ModulePhysics(Application* app, bool start_enabled = true);
	~ModulePhysics();
	bool Start();
	update_status PreUpdate();
	update_status PostUpdate();
	bool CleanUp();

private:

	bool debug;
	float _a;
	float _t;

};