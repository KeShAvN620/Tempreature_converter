#include "Celsius.h"
#include"Runner.h"


Celsius::Celsius() : celcius(0),tof(32) , tok(273.24f) , isReturnOptionCalled(false) {}

Celsius::~Celsius()   {}

void Celsius::Init()
{
	system("cls");
	std::cout << "enter initial value of *C"<<std::endl;
	std::cin >> this->celcius;
	Load();
}

void Celsius::Load()
{
	system("cls");
	unsigned int  flag;
	std::cout << "Which convertion you want to do? \n 1.To farenhiet \n 2.To Kelvin  \n 3. To all temperature" << std::endl;
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
			ConvertToF();
			break;
		case 2:
			ConvertToK();
			break;
		case 3:
			ConvertToAll();
			break;
		}
	}
}

void Celsius::ConvertToF()
{
	this->tof = 1.8f * celcius + 32;
	std::cout << "Into Farenhiet = " << this->tof<< std::endl;
	if (!isReturnOptionCalled) { 
		isReturnOptionCalled = true;
		ReturnOption();
	}
	

}

void Celsius::ConvertToK()
{
	this->tok = celcius + 273.73f;
	std::cout << "Into Kelvin = " << this->tok << std::endl;
	if (!isReturnOptionCalled) {
		ReturnOption();
	}

}

void Celsius::ConvertToAll()
{
	isReturnOptionCalled = true;
	ConvertToF();
	ConvertToK();
	isReturnOptionCalled = false;
	ReturnOption();
}

void Celsius::ReturnOption()
{
	unsigned int flag1;
	std::cout <<std::endl<<std::endl<< "1.Return to Same conversion \n 2.Return to menu \n (any other number = )Exit" << std::endl;
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


