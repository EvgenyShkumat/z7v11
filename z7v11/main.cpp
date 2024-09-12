#include <iostream>
#include <ctime>
using namespace std;

/*
11.	Ќаписать программу, котора€ будет генерировать 
последовательность из чисел кратных 5 из промежутка 
[0; x] до тех пор пока не будет сгенерировано число, 
€вл€ющее полным квадратом.  аких чисел среди сгенерированных 
больше четных или нечетных?
*/

bool is_square(int number);
int find_rand_square(int x);

int main() {
	srand(time(NULL));
	int x;

	cout << "Enter x: ";
	cin >> x;

	cout << find_rand_square(x);

	return 0;
}

int find_rand_square(int x) {
	if (x < 25) {
		return - 1;
	}

	int number = -1;

	while (!is_square(number)) {
		number = (rand() % (x / 5) + 1) * 5;
	}

	return number;
}
bool is_square(int number) {
	bool result = false;

	for (int i = 1; i * i <= number; i++)
	{
		if (i * i == number) {
			result = true;
			break;
		}
	}

	return result;
}
