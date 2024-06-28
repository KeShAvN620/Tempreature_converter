#pragma once
#include<iostream>
#include <cstdlib>
#include<conio.h>

class Runner;



class Farenhiet
{
private:
	float faren;
	float toc;
	float tok;
	bool isReturnOptionCalled;

public:
	Farenhiet();
	~Farenhiet();

public:
	void Init();
	void Load();
	void ConvertToC();
	void ConvertToK();
	void ConvertToAll();
	void ReturnOption();
};

