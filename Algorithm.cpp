#include <iostream>
#include <string>
#include <math.h> 
#include <cmath>
using namespace std;

int doAlgorithm(const int cnum)
{
	//Keeping track of 2,3,5
	int n2 = 0;
	int n3 = 0;
	int n5 = 0;
	int tempVal = cnum;
	bool iterateN2 = true;
	bool iterateN3 = true;
	bool iterateN5 = true;
	while (true)
	{
		if ( tempVal % 2 == 0 && iterateN2)
		{
			tempVal = tempVal / 2;
			n2 += 1;
		}
		else
		{ 
			iterateN2 = false;

			if ( tempVal % 3 == 0 && iterateN3)
			{
				tempVal = tempVal / 3;
				n3 += 1;
			}
			else
			{
				iterateN3 = false;
				if ( tempVal % 5 == 0 && iterateN5 )
				{
					tempVal = tempVal / 5;
					n5 += 1;
				}
				else
				{
					// Check to see if numbers add up to cnum
					if ( pow(2, n2) * pow(3, n3) * pow(5, n5) == cnum)
					{
						return cnum;
					}
					else
					{
						return 0;
					}
				}
			}
		}
	}
	return 0;
}


int main() 
{
	int i = 1;
	int index = 1;
	while (i <= 100)
	{
		int val = doAlgorithm(i);
		if (val != 0)
		{
			std::cout << "\n" << index << ".   " << val;
			index += 1;
		}
		i += 1;
	}
}
