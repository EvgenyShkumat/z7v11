#include <iostream>
#include <ctime>
using namespace std;

/*
11.	�������� ���������, ������� ����� ������������ 
������������������ �� ����� ������� 5 �� ���������� 
[0; x] �� ��� ��� ���� �� ����� ������������� �����, 
�������� ������ ���������. ����� ����� ����� ��������������� 
������ ������ ��� ��������?
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
