#include <iostream>
#include <string>

using namespace std;

int CNT;

int recursion(string &s, int l, int r) {
	CNT++;
	if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(string &s){
    return recursion(s, 0, s.length() - 1);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	string s;

	cin >> N;
	for (int i = 0; i < N; i++) {
		CNT = 0;
		cin >> s;
		cout << isPalindrome(s) << ' ' << CNT << '\n';
	}
	return (0);
}