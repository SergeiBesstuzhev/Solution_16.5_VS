#include <iostream>
#include <time.h>

int main()
{
	int array[5][5];
	int N = 0;
	struct tm buf;
	time_t t = time(NULL);
	localtime_s(&buf, &t);

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			array[i][j] = i + j;
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			std::cout << array[i][j];
		}
		std::cout << std::endl;
	}

	std::cout << "Enter N: ";
	std::cin >> N;

	for (int i = 0; i < 5; i++) {
		std::cout << array[buf.tm_mday % N][i];
	}
}