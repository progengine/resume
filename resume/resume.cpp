#include <iostream>
using namespace std;
#include <array>
#include <string>

int main() {
	string s;
	cin >> s;

	int le = s.length();

	int bukv;
	int index_bukv;

	int arr[26] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	for (int i = 0; i < le; i++) {
		bukv = s[i] - 'A';
		index_bukv = bukv;
		arr[index_bukv] = i;

	}

	int maxlen = 1;
	int lek;

	for (int i = 0; i < le; i++) {
		int q = i;
		int kon = arr[s[i] - 'A'];
		lek = kon - q + 1;
		if (lek > maxlen) {
			maxlen = lek;
		}

	}

	cout << maxlen;

}