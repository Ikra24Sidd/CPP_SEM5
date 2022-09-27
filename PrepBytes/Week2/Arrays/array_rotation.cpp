int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int temp;
		int j, c = 0;
		while (c != k) {
			temp = arr[n - 1];
			for (j = n - 2; j >= 0; j--) {
				arr[j + 1] = arr[j];
			}
			arr[0] = temp;
			c++;
		}
		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
	}
	return 0;
}