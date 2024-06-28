#pragma once
#include<iostream>
#include <cstdlib>
#include<conio.h>

class Runner;


class Celsius
{
private:
	float celcius;
	float tof;
	float tok;
	bool isReturnOptionCalled;

public:
	Celsius();
	~Celsius();

public:
	void Init();
	void Load();
	void ConvertToF();
	void ConvertToK();
	void ConvertToAll();
	void ReturnOption();

};

