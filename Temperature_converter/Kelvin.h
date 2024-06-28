#pragma once
#include<iostream>
#include <cstdlib>
#include<conio.h>

class Runner;

class Kelvin
{
private:
	float kelvin;
	float toc;
	float tok;
	bool isReturnOptionCalled;

public:
	Kelvin();
	~Kelvin();

public:
	void Init();
	void Load();
	void ConvertToC();
	void ConvertToF();
	void ConvertToAll();
	void ReturnOption();

};

