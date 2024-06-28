#include "Farenhiet.h"
#include"Runner.h"

Farenhiet::Farenhiet(): faren(0) , toc(32.0f/1.8f), tok((32.0f/1.8f) + 273.24), isReturnOptionCalled(false) {}
 
Farenhiet::~Farenhiet()  {}

void Farenhiet::Init()
{
	system("cls");
	std::cout << "enter initial value of *F" << std::endl;
	std::cin >> this->faren;
	Load();
}

void Farenhiet::Load()
{
	system("cls");
	unsigned int  flag;
	std::cout << "Which convertion you want to do? \n 1.To celcius \n 2.To Kelvin  \n 3. To all temperature" << std::endl;
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
			ConvertToK();
			break;
		case 3:
			ConvertToAll();
			break;
		}
	}
}



void Farenhiet::ConvertToC()
{
	this->toc = (faren - 32)/1.8f ;
	std::cout << "Into Celcius = " << this->toc << std::endl;
	if (!isReturnOptionCalled) {
		isReturnOptionCalled = true;
		ReturnOption();
	}


}

void Farenhiet::ConvertToK()
{
	this->tok = (( faren - 32)/1.8f) + 273.73f;
	std::cout << "Into Kelvin = " << this->tok << std::endl;
	if (!isReturnOptionCalled) {
		ReturnOption();
	}

}

void Farenhiet::ConvertToAll()
{
	isReturnOptionCalled = true;
	ConvertToC();
	ConvertToK();
	isReturnOptionCalled = false;
	ReturnOption();
}

void Farenhiet::ReturnOption()
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


