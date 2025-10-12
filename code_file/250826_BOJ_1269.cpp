#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
	int N, M;
	int number;
	int sum = 0;

	set<int> a;
	set<int> b;
	set<int> aMinusB;
	set<int> bMinusA;

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> number;
		a.insert(number);
	}
	for (int i = 0; i < M; i++) {
		cin >> number;
		b.insert(number);
	}
	set_difference(a.begin(), a.end(),
					b.begin(), b.end(),
					inserter(aMinusB, aMinusB.begin()));
	sum += aMinusB.size();

	set_difference(b.begin(), b.end(),
					a.begin(), a.end(),
					inserter(bMinusA, bMinusA.begin()));
	sum += bMinusA.size();

	cout << sum << '\n';
	
	return (0);
}