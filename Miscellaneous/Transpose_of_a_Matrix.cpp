#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
        int temp;
        for(int i = 0; i < matrix.size(); i++) {
                for(int j = 0; j < i; j++) {
                        temp = matrix[i][j];
                        matrix[i][j] = matrix[j][i];
                        matrix[j][i] = temp;
                }
        }
}

int main() {
        vector<vector<int>> matrix = {{ 5, 1, 9, 11 }, { 2, 4, 8, 10 }, { 13, 3, 6, 7 }, { 15, 14, 12, 16 }};
        rotate((matrix));
        for(int i = 0; i < matrix.size(); i++) {
                for(int j = 0; j < matrix[0].size(); j++) {
                        cout << matrix[i][j] << " ";
                }
                cout << endl;
        }
}
