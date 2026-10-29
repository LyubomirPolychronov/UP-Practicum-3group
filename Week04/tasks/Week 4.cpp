#include <iostream>

int main()
{
	// zad 8
	/*for (int i = 1000; i < 10000; i++)
	{
		int temp = i;
		int fourthDigit = temp % 10; temp /= 10;
		int thirdDigit = temp % 10; temp /= 10;
		int secondDigit = temp % 10; temp /= 10;
		int firstDigit = temp;
		int sum = firstDigit + secondDigit;
		if ((firstDigit % 2 != 0 && thirdDigit % 2 != 0) && sum == fourthDigit){
			std::cout << i << " ";
		}
	}*/

	// zad 12
	/*int N;
	std::cin >> N;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            int r = i;
            int c = j;
            int top = r;
            int left = c;
            int bottom = N - 1 - r;
            int right = N - 1 - c;

            int layer = top;
            if (left < layer) layer = left;
            if (bottom < layer) layer = bottom;
            if (right < layer) layer = right;

            int val = 0;
            int current_n = N;
            for (int l = 0; l < layer; ++l) {
                val += 4 * (current_n - 1);
                current_n -= 2;
            }

            int ri = r - layer;
            int cj = c - layer;
            int size = current_n;

            if (ri == 0) {
                val += cj + 1;
            }
            else if (cj == size - 1) {
                val += size + ri;
            }
            else if (ri == size - 1) {
                val += 2 * size - 1 + (size - 1 - cj);
            }
            else {
                val += 3 * size - 2 + (size - 1 - ri);
            }
            std::cout << val << " ";
        }
        std::cout << "\n";
    }*/
}
