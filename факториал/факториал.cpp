// N!= N * (N-1)!
// 0 != 0; 1!= 1;

//Факториал через рекурсию

#include <iostream>
using namespace std;

int CalcFactorial(int a)
{
	if (a == 1) return 1;
	if (a == 0) return 0;

	return a * CalcFactorial(a - 1);
}

int main()
{
	int a = 4; // будем искать факториал a

	cout << CalcFactorial(a) << endl;



//Факториал с помощью цикла for 

	int b = 5; // будем искать факториал числа b         //4! = 1 * 2 * 3 * 4

	int fact = 1; // будет хранить факториал

	for (int i = b; i > 0; i--)
	{
		fact *= i;

		if (fact == 0 || fact == 1) i < 0;

	};

	cout << fact << endl;
}