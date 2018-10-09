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
	summation();
	factorial();
	newSummation(10);
	puzzle();
	return 0;

  
}



void factorial()
{
	double factorial = 1;
	int i = 0;
	cin >> i;


	for (double n = 1; n <= i; n++)
	{
		
		double temp = factorial * n;
		factorial = factorial * n;;
		if (temp < DBL_MAX) 
		{
			cout << "n = " << n << " has not overflowed" << endl;
			cout << "factorial at this time is " << factorial << endl;
			cout << endl;

		}
		
	}

	cout << factorial << " ";
	
}

void summation() 
{
	int i;
	long sum = 0;
	int n = 257;
	i = 1;
	while (i <= n)
	{
		sum = sum + i;
		if (sum < 0)
		{
			cout << " Overflow at n: " << i;
		}

		i = i + 1;
	}
	cout << "THE SUMMATION IS " << sum << endl;

}

void newSummation(float n) 
{

	float sum = 1;
	if (n == 0) 
	{
		sum = 0;
	}
	else 
	{
		sum = 1 / n;
		for (long i = 1; i <= n; i++) 
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