#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

const int MAX = 1000000;
vector<bool> prime(MAX + 1, true);
int arr[101];

int countPrime(int num);
void sieveOfEratosthenes();

int main () {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int	n = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sieveOfEratosthenes();
	for (int i = 0; i < n; i++) {
		cout << countPrime(arr[i]) << "\n";
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

int countPrime(int num) {
	int count = 0;
	for (int i = 2; i <= num / 2; i++) {
		if (prime[i] == true && prime[num - i] == true) {
			count++;
		}
	}
	return (count);
}