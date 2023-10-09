#pragma once


class Object 
{
public:
	void GetAcceleration(float f, float m) 
	{
		_a = f / m;
	}

private:
	float _x;
	float _v;
	float _m;
	float _f;
	float _a;
};

Object ::Object ()
{
}

Object ::~Object ()
{
}