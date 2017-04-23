// Point-2Dplane.cpp : Defines the entry point for the console application.
//

#include <iostream>

struct coordinates
{ 
	int x;
	int y;

};

int main()
{
	coordinates p1;
	coordinates p2;
	coordinates p3;


	std::cout << "Please provide coordinates X for 1st set: ";
	std::cin >> p1.x;
	std::cout << "Please provide coordinates Y for 1st set: ";
	std::cin >> p1.y;
	std::cout << std::endl;
	std::cout << "Please provide coordinates X for 2nd set: ";
	std::cin >> p2.x;
	std::cout << "Please provide coordinates Y for 2nd set: ";
	std::cin >> p2.y;
	std::cout << std::endl;
	
	p3.x = p1.x + p2.x;
	p3.y = p1.y + p2.y;

	std::cout << "Confirmation of entries:\n";
	std::cout << "P1 X: " << p1.x << " P1 Y: " << p1.y << "\n";
	std::cout << "P2 X: " << p2.x << " P2 Y: " << p2.y << "\n";
	std::cout << std::endl;
	std::cout << "P3 X: " << p3.x << " P3 Y: " << p3.y << "\n";



	system("pause");
    return 0;
}

