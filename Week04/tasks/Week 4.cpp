#include <iostream>

int main()
{
    // zad 1
    int n;
    std::cin >> n;
    int res = 1;
    for(int i = 1; i <= n; i++){
        res *= i;
    }
    std::cout << res << std::endl;

    // zad 2
    int n;
    int count  = 0;
    while(count < 3){
        std::cin >> n;
        if(n % 2 == 0){
            count++;
        } else{
            count = 0;
        }
    }

    // zad 3
    for(int i = 1; i <= n; i++){
        if(n % i == 0 && i != 1 && i != n){
            std::cout << "false";
            return 0;
        }
    }
    std::cout << "true";
 
    // zad 4
    int n;
    std::cin >> n;
    int first = 0;
    int second = 1;
    int next;
    for(int i = 0; i <= n; i++){
        if( i<= 1){
            next = i;
        }else{
            next = first + second;
            first = second;
            second = next;
        }
    }
    std::cout << next << std::endl;

    // zad 5
    int n;
    std::cin >> n;
    int sum = 0;
    int temp = n;
    for(int i = 0; i < temp; i++){
        sum += n%10;
        n/=10;
    }
    std::cout << sum << std::endl;

    // zad 6
    int n;
    std::cin >> n;
    int count = 0;
    int temp = n;
    while(temp > 0){
        count++;
        temp /= 10;
    }
    std::cout << count << std::endl;

    // zad 7
    int n;
    std::cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
    for(int i = n - 1; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }

	// zad 8
	for (int i = 1000; i < 10000; i++)
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

	}

    // zad 9
    int n;
    std::cin >> n;
    for(int i = n; i >= 1; i--){
        if(n/i >= i){
            break;
        }
        if(n % i == 0){
            std::cout << n/i << " " << i << "\n";
        }
    }

    // zad 10
    int n;
    int sum = 0;
    int count = 0;
    int last = INT_MIN;
    while(true){
        std::cin >> n;
        if(n == last){
            break;
        }
        if(count % 2 == 0){
            sum += n;
        }
        if(n % 5 != 0){
            count++;
        }
        last = n;
    }
    std::cout << sum << std::endl;


    //zad 11
    int n;
    std::cin >> n;
    int num;
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i = 0; i < n; i++){
        std::cin >> num;
        if(num < min){
            min = num;
        }else if(num > max){
            max = num;
        }
    }
    std::cout << "MIN: " << min << std::endl;
    std::cout << "MAX: " << max << std::endl;

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


