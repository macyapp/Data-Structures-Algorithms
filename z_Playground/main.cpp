#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void print(vector<vector<int>>& grid) {
        for (auto& row : grid) {
            for (auto& element : row) {
                cout << element << " ";
            }
            cout << endl;
        }
        cout<<endl;
    }

    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int repeating, missing;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                print(grid);
                int row = (grid[i][j] - 1) / n;
                int col = (grid[i][j] - 1) % n;
                if (grid[i][j] >= 1 && grid[i][j] <= n * n) {
                    swap(grid[i][j], grid[row][col]);
                    if (grid[i][j] == grid[row][col]) {
                        repeating = grid[i][j];
                    }
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout<<grid[i][j]<<" "<<(i*n)+j+1<<endl;
                if (grid[i][j] != ((i*n)+j+1)) {
                    missing = (i*n)+j+1;
                    break;
                }
            }
        }
        return { repeating, missing };
    }
};

int main() {
    vector<vector<int>> inputGrid = {
        {1,1},
        {3,2}
        // Add your grid here
    };

    Solution solution;
    vector<int> result = solution.findMissingAndRepeatedValues(inputGrid);

    cout << "Repeated value: " << result[0] << endl;
    cout << "Missing value: " << result[1] << endl;

    return 0;
}
