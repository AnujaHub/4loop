#include <iostream>
using namespace std;

// T.C : O(m*n)
// S.C : O(1)

// Intuition:
// Maintain four boundaries:
// top    -> first unvisited row
// bottom -> last unvisited row
// left   -> first unvisited column
// right  -> last unvisited column
//
// Traverse in four directions:
// 1. Left -> Right
// 2. Top -> Bottom
// 3. Right -> Left
// 4. Bottom -> Top
//
// After each traversal, shrink the corresponding boundary.
// Continue until all elements have been visited.

int main() {

    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9,10,11,12},
        {13,14,15,16}
    };

    int rows = 4;
    int cols = 4;

    int top = 0;
    int bottom = rows - 1;
    int left = 0;
    int right = cols - 1;

    while (top <= bottom && left <= right) {

        // Left -> Right
        for (int i = left; i <= right; i++){
            cout << matrix[top][i] << " ";
        }
        top++;

        // no if else in first two loops since top,btm already checekd and didn't chnange aafter 
        // Top -> Bottom
        for (int i = top; i <= bottom; i++){
            cout << matrix[i][right] << " ";
        }
        right--;

        // Right -> Left  //only if there exists a right
        if (top <= bottom) { 
            for (int i = right; i >= left; i--){
                cout << matrix[bottom][i] << " ";
            }
            bottom--;
        }

        // Bottom -> Top
        if (left <= right) {
            for (int i = bottom; i >= top; i--){
                cout << matrix[i][left] << " ";
            }
            left++;
        }
    }


    return 0;
}