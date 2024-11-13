#include<iostream>
using namespace std;

template <typename T>

int binary_search(T arr[], int size, T target) {
	int left = 0, right = size - 1;
	int mid;

	while (left<=right){
		mid = (left + right) / 2;
		if (arr[mid] == target) {
			return mid;
		}
		else if (arr[mid] > target) {
			right = mid - 1;
		}
		else if(arr[mid] < target){
			left = mid + 1;
		}
	}
	return -1;
}

void main() {
	int n, q;
	char t;
	int test;
	cout << "number of test cases:";
	cin >> test;
	while (test--) {
		cout << "i/s n q:";
		cin >> t >> n >> q;
		if (t == 'i') {
			int* arr = new int[n];
			int* target = new int[q];
			cout << "enter the interger array:";
			for (int i = 0; i < n; i++) {
				cin >> arr[i];
			}
			cout << "enter the interger target:";
			for (int i = 0; i < q; i++) {
				cin >> target[i];
			}
			for (int i = 0; i < q; i++) {
				cout << "target " << target[i] << " in index " << binary_search<int>(arr, n, target[i]) << endl;
			}
			delete[] arr;
			delete[] target;
		}
		else if (t == 's') {
			string* str = new string[n];
			string* target = new string[q];
			cout << "enter the string member:";
			for (int i = 0; i < n; i++) {
				cin >> str[i];
			}
			cout << "enter the string target:";
			for (int i = 0; i < q; i++) {
				cin >> target[i];
			}
			for (int i = 0; i < q; i++) {
				cout << "target " << target[i] << " in index " << binary_search<string>(str, n, target[i]) << endl;
			}
			delete[] str;
			delete[] target;
		}
	}
}