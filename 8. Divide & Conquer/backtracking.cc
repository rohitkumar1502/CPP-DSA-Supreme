// print permutation problem
/*
#include<iostream>
using namespace std;
void printPermutation(string&str, int i){
    int n = str.length();
    //Base Case
    if(i >= n){
        cout<<str<<" ";
        return;
    }

    for(int j = i; j < n;  j++){
        swap(str[i], str[j]);
        // recursive call
        printPermutation(str, i + 1);

        //backtracking -> for form a original state
        swap(str[i], str[j]);
    }
}
int main(){
    string str = "abc";
    int i = 0;
    printPermutation(str, i);
    return 0;
}

*/

// Rat in a maze problem
/*
#include <iostream>
#include <vector>
using namespace std;
bool isSafe(int arr[][4], int row, int col, int i , int j, vector<vector<bool>> &visited){
    if((i >= 0 && i < row) && (j >= 0 && j < col) && (arr[i][j] == 1) && (visited[i][j] == false)){
        return true;
    }
    else{
        return false;
    }

}

void solveMaze(int arr[][4], int row, int col, int i, int j, vector<vector<bool>> &visited, vector<string> &path, string output)
{
    //Base case
    if(i == row -1 && j == col -1){
        //ans found then store it in path vector
        path.push_back(output);
        return;
    }
    // Down - i + 1, j
    if(isSafe(arr, row, col, i +1, j, visited)){
        visited[i + 1][j] = true;
        // Recursive call
        solveMaze(arr, row, col, i + 1, j, visited, path, output + 'D');
        // Backtracking
        visited[i +1][j] = false;

    }

    // Left - i , j -1
     if(isSafe(arr, row, col, i, j -1, visited)){
        visited[i][j - 1] = true;
        // Recursive call
        solveMaze(arr, row, col, i, j -1, visited, path, output + 'L');
        // Backtracking
        visited[i][j -1] = false;

    }


    // Right - i, j+1
     if(isSafe(arr, row, col, i, j +1, visited)){
        visited[i][j +1] = true;
        // Recursive call
        solveMaze(arr, row, col, i, j +1, visited, path, output + 'R');
        // Backtracking
        visited[i][j +1] = false;

    }


    // Up - i -1, j 
     if(isSafe(arr, row, col, i -1, j, visited)){
        visited[i - 1][j] = true;
        // Recursive call
        solveMaze(arr, row, col, i - 1, j, visited, path, output + 'U');
        // Backtracking
        visited[i -1][j] = false;

    }

}
int main()
{
    int maze[4][4] = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    if (maze[0][0] == 0)
    {
        cout << "No path exists" << endl;
        return 0;
    }

    int row = 4, col = 4;
    vector<vector<bool>> visited(row, vector<bool>(col, false));

    // SRC will be true
    visited[0][0] = true;
    vector<string> path;
    string output = "";
    solveMaze(maze, row, col, 0, 0, visited, path, output);
    cout << "Priting the result" << endl;
    for (auto i : path)
    {
        cout << i << " ";
    }
    cout << endl;
    if (path.size() == 0)
    {
        cout << "Not path exists" << endl;
    }

    return 0;
}

*/

#include<iostream>
using namespace std;
int main(){
    
    return 0;
}
