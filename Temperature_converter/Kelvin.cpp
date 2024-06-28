#include "Kelvin.h"
#include"Runner.h"

Kelvin::Kelvin() : kelvin(0), toc(-273.24f), tok(-459.832f), isReturnOptionCalled(false) {}

Kelvin::~Kelvin()  {}

void Kelvin::Init()
{
	system("cls");
	std::cout << "enter initial value of F" << std::endl;
	std::cin >> this->kelvin;
	Load();
}

void Kelvin::Load()
{
	system("cls");
	unsigned int  flag;
	std::cout << "Which convertion you want to do? \n 1.To celcius \n 2.To farenhiet  \n 3. To all temperature" << std::endl;
	std::cin >> flag;
	if (flag < 1 || flag >3) {
		std::cout << "Unexpected value Please Enter option from 1 to 3" << std::endl;
		exit(0);
	}
	else
	{
		switch (flag)
		{
		case 1:
			ConvertToC();
			break;
		case 2:
			ConvertToF();
			break;
		case 3:
			ConvertToAll();
			break;
		}
	}
}

void Kelvin::ConvertToC()
{
	this->toc = kelvin- 273.24f;
	std::cout << "Into celcius = " << this->toc << std::endl;
	if (!isReturnOptionCalled) {
		isReturnOptionCalled = true;
		ReturnOption();
	}
}

void Kelvin::ConvertToF()
{
	this->tok = ((kelvin - 273.24)*1.8f) + 32;
	std::cout << "Into Kelvin = " << this->tok << std::endl;
	if (!isReturnOptionCalled) {
		ReturnOption();
	}
}

void Kelvin::ConvertToAll()
{
	isReturnOptionCalled = true;
	ConvertToC();
	ConvertToF();
	isReturnOptionCalled = false;
	ReturnOption();
}

void Kelvin::ReturnOption()
{
	unsigned int flag1;
	std::cout << std::endl << std::endl << "1.Return to Same conversion \n 2.Return to menu \n (any other number = )Exit" << std::endl;
	std::cin >> flag1;
	if (flag1 == 1) {
		Init();
	}
	else if (flag1 == 2) {
		Runner::RunnerProject();
	}
	else {
		exit(0);

	}
}
