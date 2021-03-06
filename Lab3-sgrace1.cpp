// Spencer Grace



#include<float.h>
#include <iomanip>
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

void summation();  
void factorial();
void newSummation(float n);
void puzzle();

int main()
{
	summation();				//all functions were made independenly for ease of testing.
	factorial();
	newSummation(10);
	puzzle();
	return 0;

  
}



void factorial()
{
	double factorial = 1;			//initalized holder
	int i = 0;
	cin >> i;


	for (double n = 1; n <= i; n++)
	{
		
		double temp = factorial * n;		//a little redundant but it helps me to understand what is going on.
		factorial = factorial * n;
		if (temp < DBL_MAX) 
		{
			cout << "n = " << n << " has not overflowed" << endl;			//utilized to find out the last number right before the factorial gets dragged to infinity
			cout << "factorial at this time is " << factorial << endl;
			cout << endl;

		}
		
	}

	cout << factorial << " ";
	
}

void summation() 
{
	int i;
	long sum = 0;		//initalized holder
	int n = 257;		//n is changed to show different results
	i = 1;
	while (i <= n)
	{
		sum = sum + i;
		if (sum < 0)
		{
			cout << " Overflow at n: " << i;  //if statement utlized to find if math has gone astray
		}

		i = i + 1;
	}
	cout << "The summation is " << sum << endl;

}

void newSummation(float n) 
{

	float sum = 1;		//initalized holder
	if (n == 0) 
	{
		sum = 0;			//error handling
	}
	else 
	{
		sum = 1 / n;
		for (long i = 1; i <= n; i++)		//loop to find answer
		{
			sum += 1 / n;

		}
		cout << "n = " << endl << "The summation ratio is " << sum;
	}
}

void puzzle() 
{
	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
}

//useing float
/*
'\\dellnas\sgrace1\Folders\Desktop\year2projects\Lab03\Lab03'
CMD.EXE was started with the above path as the current directory.
UNC paths are not supported.  Defaulting to Windows directory.
i = 3.4
i = 3.6
i = 3.8
i = 4
i = 4.2
i = 4.4
Press any key to continue . . .
*/

//using double
/*
'\\dellnas\sgrace1\Folders\Desktop\year2projects\Lab03\Lab03'
CMD.EXE was started with the above path as the current directory.
UNC paths are not supported.  Defaulting to Windows directory.
i = 3.4
i = 3.6
i = 3.8
i = 4
i = 4.2
Press any key to continue . . .
*/