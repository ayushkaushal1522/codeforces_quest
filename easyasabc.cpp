#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> dir = {{0,1}, {1,0}, {0,-1}, {-1,0}, {1,1}, {-1,-1}, {-1,1}, {1,-1}};


void dfs(vector<vector<bool>>& visited, vector<string>& grid, int row, int col, string temp , string &result) {
    if(temp.length() == 3){
        result = min(result,temp);
        return;
    }

    temp.push_back(grid[row][col]);
    visited[row][col] = true;

    for(auto d : dir) {
        int newRow = row + d.first;
        int newCol = col + d.second;

        if(newRow >= 3 || newRow < 0 || newCol >= 3 || newCol < 0 || visited[newRow][newCol]) continue;

        dfs(visited, grid, newRow, newCol, temp, result);
    }

    temp.pop_back();
    visited[row][col] = false;
    // return result;
}

int main() {
    vector<string> grid;
    
    for(int i = 0; i < 3; i++) {
        string str;
        cin >> str;
        grid.push_back(str);
    }
    string result ="CCC";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            vector<vector<bool>> visited(3, vector<bool>(3, false));
            dfs(visited, grid, i, j , "" , result);
        }
    }

    cout << result << "\n";
    return 0;
}
