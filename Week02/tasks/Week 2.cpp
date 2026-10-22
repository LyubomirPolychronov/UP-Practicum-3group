#include <iostream>

const int FOUR_DIGIT_NUMBER = 4;
const double epsilon = 0.00000001;
const double euro_to_dollar = 1.12;
int main()
{
	int n;
	std::cin >> n;
	// zad 1
	if(n & 1)
		std::cout << 1 << std::endl;
	else
		std::cout << 0 << std::endl;

	// zad 2
	for(int i = 0; i < FOUR_DIGIT_NUMBER; i++)
	{
		std::cout << n % 10;
		n /= 10;
	}

	// zad 3
	char symbol;
	std::cin >> symbol;
	int num = ((symbol >= 'A' && symbol <= 'Z') ? ((symbol - 'A') + 1) : ((symbol - 'a') + 1));
	int bit = ((symbol >= 'A' && symbol <= 'Z') ? 1 : 0);
	std::cout << num << ", " << bit << "\n";

	// zad 4
	double euro, dollar;
	std::cin >> euro >> dollar;
	double sum = euro * euro_to_dollar - dollar;
	sum = (sum < 0) ? -sum : sum;
	if (sum < epsilon) {
		std::cout << 1;
	}
	else { std::cout << 0; }

	// zad 5
	int a, b;
	std::cin >> a >> b;
	if(a < 5 || a > 93456 || b < 5 || b > 93456) {
		std::cout << 1;
		return 0;
	}
	std::cout << 0 << '\n';
	std::cout << std::pow((a + b), 3) + std::pow((a - b),2) - std::pow((a + b), 4) << '\n';

	// zad 6
	int a = 0, b = 0;
	char first, sec;
	
	for (int i = 0; i < 3; i++) {
		std::cin >> first;
		a *= 10;
		a += first - '0';
	}
	for (int i = 0; i < 3; i++) {
		std::cin >> sec;
		b *= 10;
		b += sec - '0';
	}
	std::cout << (a + b) / 10;

	// zad 7
	int N;
	std::cin >> N;
	int roomFor10 = 0;
	while(N >= 10) {
		roomFor10++;
		N -= 10;
	}
	int roomFor7 = 0;
	while(N >= 7) {
		roomFor7++;
		N -= 7;
	}
	int roomFor5 = 0;
	while(N >= 5) {
		roomFor5++;
		N -= 5;
	}
	int roomFor2 = 0;
	while(N >= 2) {
		roomFor2++;
		N -= 2;
	}
	int roomFor1 = N;
	std::cout << "Rooms for 1: " << roomFor1 << "\n";
	std::cout << "Rooms for 2: " << roomFor2 << "\n";
	std::cout << "Rooms for 5: " << roomFor5 << "\n";
	std::cout << "Rooms for 7: " << roomFor7 << "\n";
	std::cout << "Rooms for 10: " << roomFor10 << "\n";
}
