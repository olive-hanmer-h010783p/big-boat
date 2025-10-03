// big boat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int x;
	cout << "type length ";
	cin >> x;
	
	int y;
	cout << "type height ";
	cin >> y;

	string flag1 = "    *\n";
	string flag2 = "    **\n";
	string flag3 = "    * *\n";
	string flag4 = "    ****\n";
	string pole = "     |\n";
	string boat1 = "***********\n";
	string boat2 = "*         *\n";
	string boat3 = " *       * \n";
	string boat4 = "  *******  \n";

	if (x >= 0 and y >= 0)
		cout << flag1;
		cout << flag2;
		cout << flag3;
		cout << flag4;
		cout << pole;
		cout << boat1;
		cout << boat2;
		cout << boat3;
		cout << boat4;

	if (x > 0)
		while (x > 1)
		{
			flag1.insert(1," ");
			flag2.insert(1," ");
			flag3.insert(1," ");
			flag4.insert(1," ");
			pole.insert(1," ");
			boat1.insert(1,"*");
			boat2.insert(3," ");
			boat3.insert(3," ");
			boat4.insert(4,"*");
			x = x - 1;
			
		}
		
	cout << flag1;
	cout << flag2;
	cout << flag3;
	cout << flag4;
	while (y > 1)
	{
		y = y - 1;
		cout << pole;
	}
	cout << boat1;
	cout << boat2;
	cout << boat3;
	cout << boat4;
}