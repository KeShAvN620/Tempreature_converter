#pragma once

#include"Celsius.h"  
#include"Farenhiet.h"
#include"Kelvin.h"


class Runner {
public:
static  void RunnerProject() {
	system("cls");
		Celsius celsius;
		Farenhiet faran;
		Kelvin kelvin;
		unsigned int flag;

		std::cout << "Which is your base Tempearture? \n 1. Celsius \n 2. Farenhiet \n 3. Kelvin \n 4. Exit" << std::endl;
		std::cin >> flag;
		if (flag < 1 && flag >4) {
			std::cout << "Unexpected value Please Enter option from 1 to 4" << std::endl;
		}
		else
		{
			switch (flag)
			{
			case 1:
				celsius.Init();
				break;

			case 2:
				faran.Init();
				break;
		
			case 3:
				kelvin.Init();
				break;

			case 4:
				exit(0);
				break;
			}
		}



	

	}

};