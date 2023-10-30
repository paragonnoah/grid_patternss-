#include <iostream>
#include <vector>

using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<char>> grid(rows, vector<char>(cols));

    // Input the grid
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> grid[i][j];
        }
    }

    // Update the grid as required
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 'S') {
                cout << 'S';
            } else if (grid[i][j] == 'G') {
                cout << '*';
            } else {
                cout << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}