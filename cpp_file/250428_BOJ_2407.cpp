#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string cache[101][101];

string bigAdd(string n1, string n2) {
	int sum = 0;
	string ret;

	while (!n1.empty() || !n2.empty() || sum) {
		if ((!n1.empty())) {
			sum += n1.back() - '0';
			n1.pop_back();
		}
		if (!n2.empty()) {
			sum += n2.back() - '0';
			n2.pop_back();
		}
		ret.push_back((sum % 10) + '0');
		sum /= 10;
	}
	reverse(ret.begin(), ret.end());
	return (ret);
}

string combination(int N, int M) {
	if (N == M || M == 0)
		return "1";
	string &ret = cache[N][M];
	if (ret != "")
		return ret;
	return ret = bigAdd(combination(N - 1, M - 1), combination(N - 1, M));
}

int main() {
    int n, m;
    cin >> n >> m;
    
    cout << combination(n, m) << endl;
    
    return 0;
}