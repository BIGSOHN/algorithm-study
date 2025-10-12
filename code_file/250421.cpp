#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

const int MAX = 1000000;
vector<bool> prime(MAX + 1, true);

void printPrime(int num);
void sieveOfEratosthenes();

int main () {
	ios::sync_with_stdio(false);

	vector<int> numbers;
	int	n = 0;

	cin >> n;
	while (n != 0) {
		numbers.push_back(n);
		cin >> n;
	}
	sieveOfEratosthenes();
	for (int i = 0; i < numbers.size(); i++) {
		printPrime(numbers[i]);
	}
}

void sieveOfEratosthenes() {
	prime[0] = prime[1] = false;
	for (int i = 2; i * i <= MAX; i++) {
		if (prime[i]) {
			for (int j = i * i; j <= MAX; j += i) {
				prime[j] = false;
			}
		}
	}
}

void printPrime(int num) {
	for (int i = 2; i <= num / 2; i++) {
		if (prime[i] == true && prime[num - i] == true) {
			cout << num << " = " << i << " + " << num - i << "\n";
			return ;
		}
	}
	cout << "Goldbach's conjecture is wrong.";
}