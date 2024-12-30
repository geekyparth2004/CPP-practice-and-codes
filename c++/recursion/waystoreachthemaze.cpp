#include <iostream>
using namespace std;

// Recursive function to count ways to reach the destination
int countWays(int m, int n) {
    // Base case: If you are at the first row or first column, 
    // there's only one way to reach the destination
    if (m == 1 || n == 1)
        return 1;

    // Recursive calls: move down or right
    return countWays(m - 1, n) + countWays(m, n - 1);
}

int main() {
    int m, n;
    cout << "Enter the number of rows and columns in the maze: ";
    cin >> m >> n;

    // Call the recursive function and display the result
    cout << "Number of ways to reach the destination: " << countWays(m, n) << endl;

    return 0;
}
