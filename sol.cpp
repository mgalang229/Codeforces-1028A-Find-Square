#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	char a[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	// view the image in this repository for better understanding
	int row_start = INT_MAX;
	int column_start = INT_MAX;
	int row_end = INT_MIN;
	int column_end = INT_MIN;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == 'B') {
				// get the minimum (start) index of the occurrence of 'B' in terms of row
				row_start = min(row_start, i);
				// get the minimum (start) index of the occurrence of 'B' in terms of column
				column_start = min(column_start, j);
				// get the maximum (end) index of the occurrence of 'B' in terms of row
				row_end = max(row_end, i);
				// get the maximum (end) index of the occurrence of 'B' in terms of column
				column_end = max(column_end, j);
			}
		}
	}
	// calculate the averages in the rows and columns (average = midpoint = center)
	cout << (row_start + row_end) / 2 + 1 << " " << (column_start + column_end) / 2 + 1 << '\n';
	return 0; 
}
