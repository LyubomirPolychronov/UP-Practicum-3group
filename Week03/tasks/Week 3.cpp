#include <iostream>
int powerOfTen(int k) {
	int res = 1;
	while (k  > 0) {
		res *= 10;
		k--;
	}
	return res;
}
int main()
{
	// zad 1
	int n;
	std::cin >> n;
	if (n > 0) {
		std::cout << "The number is positive" << std::endl;
	}else if(n == 0){
		std::cout << "The number is zero" << std::endl;
	}else{
		std::cout << "The number is negative" << std::endl;
	}

	// zad 2
	int n;
	std::cin >> n;
	if (n > 250) {
		std::cout << n * 0.8 << '\n';
		return 0;
	}
	if(n > 100 && n <= 250){
		std::cout << n * 0.9 << '\n';
		return 0;
	}
	std::cout << n << '\n';

	//zad 3
	int n;
	std::cin >> n;
	std::cout << (n % 2 == 0 ? "The number is even" : "The number is odd") << std::endl;

	//zad 4
	int n;
	std::cin >> n;
	if(n <0 || n >100){
		std::cout << "Invalid number" << std::endl;
		return 0;
	}
	std::cout << (n >= 18? "You are allowed to vote" : "You are not allowed to vote") << std::endl;

	//zad 5
	int a, b, c;
	std::cin >> a >> b >> c;
	int max = 0, min = 0;
	if (a > b && a > c) {
		max = a;
		if (b > c) {
			min = c;
		}
		else
		{
			min = b;
		}
	}else if(a > b && a < c){
		max = c;
		min = b;
	}
	else if (a < b && a > c) {
		min = c;
		max = b;
	}
	else if(a < b && a < c){
		min = a;
		if (b > c) {
			max = b;
		}
		else
		{
			max = c;
		}
	}
	else if (a == b && a == c) {
		min = max = a;
	}
	else if (a == b && a > c) {
		max = a;
		min = c;
	}
	else if (a == b && a < c) {
		min = a;
		max = c;
	}
	else if (a == c && a > b) {
		max = a;
		min = b;
	}
	else if (a == c && a < b) {
		min = a;
		max = b;
	}
	else if (b == c && b > a) {
		max = b;
		min = a;
	}
	else if (b == c && b < a) {
		min = b;
		max = a;
	}
	std::cout << "Max: " << max << std::endl;
	std::cout << "Min: " << min << std::endl;

	// zad 6
	char symbol;
	std::cin >> symbol;
	switch (symbol) {
	case 'a': std::cout << "Vowel" << std::endl;
		break;
	case 'e': std::cout << "Vowel" << std::endl;
		break;
	case 'i': std::cout << "Vowel" << std::endl;
		break;
	case 'o': std::cout << "Vowel" << std::endl;
		break;
	case 'u': std::cout << "Vowel" << std::endl;
		break;
	case 'A': std::cout << "Vowel" << std::endl;
		break;
	case 'E': std::cout << "Vowel" << std::endl;
		break;
	case 'I': std::cout << "Vowel" << std::endl;
		break;
	case 'O': std::cout << "Vowel" << std::endl;
		break;
	case 'U': std::cout << "Vowel" << std::endl;
		break;
	default: std::cout << "Consonant" << std::endl;

	}

	// zad 7
	int n;
	std::cin >> n;
	switch (n) {
		case 1: std::cout << "Monday" << std::endl;
			break;
		case 2: std::cout << "Tuesday" << std::endl;
			break;
		case 3: std::cout << "Wednesday" << std::endl;
			break;
		case 4: std::cout << "Thursday" << std::endl;
			break;
		case 5: std::cout << "Friday" << std::endl;
			break;
		case 6: std::cout << "Saturday" << std::endl;
			break;
		case 7: std::cout << "Sunday" << std::endl;
			break;
		default: std::cout << "Invalid number" << std::endl;

	}
		if(n == 1){
			std::cout << "Monday" << std::endl;
		}
		else if(n == 2){
			std::cout << "Tuesday" << std::endl;
		}
		else if(n == 3){
			std::cout << "Wednesday" << std::endl;
		}
		else if(n == 4){
			std::cout << "Thursday" << std::endl;
		}
		else if(n == 5){
			std::cout << "Friday" << std::endl;
		}
		else if(n == 6){
			std::cout << "Saturday" << std::endl;
		}
		else if(n == 7){
			std::cout << "Sunday" << std::endl;
		}
		else{
			std::cout << "Invalid number" << std::endl;
		}
	
	//zad 8
	int a, b;
	char op;
	std::cin >> a >> op >> b;
	switch(op){
		case '+': std::cout << a + b << std::endl;
			break;
		case '-': std::cout << a - b << std::endl;
			break;
		case '*': std::cout << a * b << std::endl;
			break;
		case '/': 
			if(b == 0){
				std::cout << "Division by zero" << std::endl;
			}else{
				std::cout << a / b << std::endl;
			}
			break;
		default: std::cout << "Invalid operator" << std::endl;
	}
	
	// zad 9
	int n;
	std::cin >> n;											// 12321
	for (int i = 0; i < 5; i++)
	{
		int first = (n / powerOfTen(5 - 1 - i)) % 10;
		int last = (n / powerOfTen(i)) % 10;
		if (first != last) {
			std::cout << "Not palindrome\n";
			return 0;
		}
	}
	std::cout << "Palindrome\n";

	// zad 10
	int day, month;
	std::cin >> day >> month;
	if(day < 0 || day > 31){
	std::cout << "Invalid day\n";
	return 0;
	}
	int maxDays;
	switch (month) {
	case 1: maxDays = 31;
		break;
	case 2: maxDays = 28;
		break;
	case 3: maxDays = 31;
		break;
	case 4: maxDays = 30;
		break;
	case 5: maxDays = 31;
		break;
	case 6: maxDays = 30;
		break;
	case 7: maxDays = 31;
		break;
	case 8: maxDays = 31;
		break;
	case 9: maxDays = 30;
		break;
	case 10: maxDays = 31;
		break;
	case 11: maxDays = 30;
		break;
	case 12: maxDays = 31;
		break;
	default: std::cout << "Invalid input\n";
		return 0;
	}
	if (day < maxDays) {
		std::cout << ++day << " " << month << "\n";
	}
	else if(month != 12)
	{
		std::cout << 1 << " " << ++month << "\n";
	}
	else
	{
		std::cout << 1 << " " << 1 << "\n";
	}

	// zad 11
	double grade;
	std::cin >> grade;
	if (grade >= 5.5 && grade < 6.0) {
		std::cout << "Excellent\n";
		return 0;
	}
	if (grade >= 4.5 && grade < 5.5) {
		std::cout << "Very Good\n";
		return 0;
	}
	if (grade >= 3.5 && grade < 4.5) {
		std::cout << "Good\n";
		return 0;
	}
	if (grade >= 3 && grade < 3.5) {
		std::cout << "Average\n";
		return 0;
	}
	if (grade >= 2 && grade < 3) {
		std::cout << "Poor\n";
		return 0;
	}
	std::cout << "Invalid\n";

	// bonus
	int s;
	std::cin >> s;
	if (s == 0 || s == 1 || s == 2) {
		std::cout << "simple\n";
		return 0;
	}
	if (s == 3 || s == 4 ) {
		std::cout << "ops five\n";
		return 0;
	}
	if (s == 5) {
		std::cout << "five\n";
		return 0;
	}
}
