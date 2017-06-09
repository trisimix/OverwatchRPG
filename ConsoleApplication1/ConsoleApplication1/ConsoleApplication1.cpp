#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
int heroSelect()
{
	std::cout << "Please pick a character:" << std::endl;
	std::cout << "---ATTACK---" << std::endl << "1. Genji" << std::endl << "2. Mcree" << std::endl << "3. Pharah" << std::endl << "4. Reaper" << std::endl << "5. Soldier" << std::endl << "6. Sombra" << std::endl << "7. Tracer" << std::endl;
	std::cout << "---DEFENSE---" << std::endl << "8. Bastion" << std::endl << "9. Hanzo" << std::endl << "10. Junkrat" << std::endl << "11. Mei" << std::endl << "12. Torbjorn" << std::endl << "13. Widowmaker" << std::endl;
	std::cout << "---TANKS---" << std::endl << "14. D.va" << std::endl << "15. Orisa" << std::endl << "16. Reinhardt" << std::endl << "17. Roadhog" << std::endl << "18. Winston" << std::endl << "19. Zarya" << std::endl;
	std::cout << "---SUPORT---" << std::endl << "20. Ana" << std::endl << "21. Lucio" << std::endl << "22. Mercy" << std::endl << "23. Symmetra" << std::endl << "24. Zenyatta" << std::endl;
	int a;
	std::cout << "Please enter which number character you would like to play:_";
	std::cin >> a;
	int b;
	b = 9;
	if (a > 24)
	{
		std::cout << "figures a punk like you would choose hanzo..." << std::endl;
		return b;
	}
	else if (a < 1)
	{
		std::cout << "figures a punk like you would choose hanzo..." << std::endl;
		return b;
	}
	else
	{
		return a;
	}
}
int heroMinDps(int x)
{
	if (x = 1)
		return 75;
	else if (x = 2)
		return 70;
	else if (x = 3)
		return 103;
	else if (x = 4)
		return 46;
	else if (x = 5)
		return 36;
	else if (x = 6)
		return 70;
	else if (x = 7)
		return 30;
	else if (x = 8)
		return 98;
	else if (x = 9)
		return 29;
	else if (x = 10)
		return 70;
	else if (x = 11)
		return 39;
	else if (x = 12)
		return 114;
	else if (x = 13)
		return 87;
	else if (x = 14)
		return 28;
	else if (x = 15)
		return 100;
	else if (x = 16)
		return 75;
	else if (x = 17)
		return 73;
	else if (x = 18)
		return 46;
	else if (x = 19)
		return 61;
	else if (x = 20)
		return 60;
	else if (x = 21)
		return 51;
	else if (x = 22)
		return 80;
	else if (x = 23)
		return 22;
	else if (x = 24)
		return 66;
	else
		return 0;
}
int heroMaxDps(int x)
{
	if (x = 1)
		return 135;
	else if (x = 2)
		return 140;
	else if (x = 3)
		return 103;
	else if (x = 4)
		return 161;
	else if (x = 5)
		return 122;
	else if (x = 6)
		return 120;
	else if (x = 7)
		return 120;
	else if (x = 8)
		return 366;
	else if (x = 9)
		return 125;
	else if (x = 10)
		return 133;
	else if (x = 11)
		return 101;
	else if (x = 12)
		return 180;
	else if (x = 13)
		return 131;
	else if (x = 14)
		return 168;
	else if (x = 15)
		return 130;
	else if (x = 16)
		return 75;
	else if (x = 17)
		return 164;
	else if (x = 18)
		return 46;
	else if (x = 19)
		return 115;
	else if (x = 20)
		return 100;
	else if (x = 21)
		return 51;
	else if (x = 22)
		return 80;
	else if (x = 23)
		return 111;
	else if (x = 24)
		return 104;
	else
		return 0;
}
int getRandomNumber(int y, int m)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // static used for efficiency, so we only calculate this value once
																				 // evenly distribute the random number across our range
	return static_cast<int>(rand() * fraction * (m - y + 1) + y);
}
int accuracyCheck(int a, int m, int y)
{
	rand();
	rand();
	int z;
	int b;
	int c;
	int d;
	z = 928;
	b = getRandomNumber(y, m);
	c = z - a;
	if (c < b)
		d = getRandomNumber(c, b);
	else if (c > b)
		d = getRandomNumber(b, c);
	else
		d = b;
	return d;

	//more specifically subtract attack min and max from the highest heroes total min and max and pick a number between that and the randomized number
	//pick a number between min and max, then pick a number between that number and another number, the larger the characters max damage the closer to zero the second number can be
}






int main()
{
	std::cout << "Welcome to the Overwatch Text Based RPG" << std::endl;
	// spot here for random number generated that initializes random number memory spot and if elses it by diving by 10 and rounding it
		//create stats, health, armor, shield DPS (calculate damage and fire rate), create accuracy stat
	//x = hero y = dps z =health w = armor v = shield u = accuracy(use this one every attack) e = e min f = e max s = shift min t = shift max
	int x;
	int y;
	int z;
	int w;
	int v;
	int u;
	int m;
	int a;
	x = heroSelect();
	y = heroMinDps(x);
	m = heroMaxDps(x);
	a = y + m;
	std::cout << accuracyCheck(a, m, y) << std::endl;
	std::cout << accuracyCheck(a, m, y) << std::endl;
	std::cout << accuracyCheck(a, m, y) << std::endl;
	std::cout << accuracyCheck(a, m, y) << std::endl;
	std::cout << accuracyCheck(a, m, y) << std::endl;
	std::cout << "Press any key to close, thank you for playing!" << std::endl;
	std::cin.clear(); // reset any error flags
	std::cin.ignore(32767, '\n'); // ignore any characters in the input buffer until we find an enter character
	std::cin.get(); // get one more char from the user
	return 0;
}
