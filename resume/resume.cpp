#include <iostream>
using namespace std;
#include <unordered_set>
#include <array>
#include <vector>


int main() {
	int n;
	int m;

	cin >> n >> m;


	int* arr1 = new int[n];
	int* arr2 = new int[m];


	unordered_set<int> hash;

	for (int i = 0; i < n; i++) {
		cin >> arr1[i];
		hash.insert(arr1[i]);

	}

	for (int j = 0; j < m; j++) {
		cin >> arr2[j];
	}

	int total = 0;
	vector<int> v;
	


	for (int d = 0; d < m; d++) {
		if (hash.find(arr2[d]) == hash.end()) {
			total++;
			v.push_back(arr2[d]);
		}

	}

	cout << total << endl;

	for (int k = 0; k < v.size(); k++) {
		cout << v[k] << " ";
	}

	delete[] arr1;
	delete[] arr2;

}
