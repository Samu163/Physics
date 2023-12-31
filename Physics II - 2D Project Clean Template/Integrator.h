#pragma once


class Integrator
{
public:

	float ImplicitEuler(float x, float v, float a, float t)
	{
		v += a * t;
		x += v * t;

		return x;
	}
	float  VelocityVerlet(float x, float v, float a, float t)
	{
		v += a * t;
		x += v * t + ( a * t * t)/2;
		
		return x;
	}
	float StormetVerlet(float x, float v, float a, float t)
	{
		float xOld = x;
		x += 2 * x - xOld + a * t * t;
		return x;
	}

private:
	float _x;
	float _v;
	float _a;
	float _t;
};