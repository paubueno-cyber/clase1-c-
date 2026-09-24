#include<iostream>
#include<string>


int main()
{   
	std::string textParell = "parell";
	std::string textSenar = "senar";


	bool* elMeuvector = new bool[10];

	for (int i = 0; i < 10; ++i)
	{
		if (i % 2 == 0)
		{
			elMeuvector[i] = true;
		}

		else
	    {
			elMeuvector[i] = false;
		}

	}

	int digit;

	while (true)
	{
		std::cout << "digam un numero del 0 al 9: ";
		std::cin >> digit;
	

	if (digit >= 0 && digit <= 9)
	{
		if (elMeuvector[digit])
		{
			std::cout << "el numero " << digit << " es " << textParell << std::endl;
			
		}

		else
		{
			std::cout << "el teu numero " << digit << " es " << textSenar << std::endl;
		}


	}

	else
	{
		std::cout << "el teu numero no esta en el rang correcte" << std::endl;
	}
	
	/*std::cout << std::endl;*/
	}

}
