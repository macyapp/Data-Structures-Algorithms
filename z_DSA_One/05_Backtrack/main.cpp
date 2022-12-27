#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int x, int y, vector<vector<bool>> &board, int n) {
    int i,j;
    // Row Check
    for(i=0;i<y;i++) {
        if(board[x][i])
            return false;
    }
    // Column Check
    for(j=0;j<x;j++) {
        if(board[j][y])
            return false;
    }
    // '/' diagonal check
    for(i=x,j=y;i>=0&&j<n;i--,j++) {
        if(board[i][j])
            return false;
    }
    // '\' diagonal check
    for(i=x,j=y;i>=0&&j>=0;i--,j--) {
        if(board[i][j])
            return false;
    }
    return true;
}

bool nQueen(vector<vector<bool>> &board, int n) {
    int i,j;
    if(n==0)
        return true;
    for(i=0;i<n;i++) {
        if(isSafe(i,j,board,n)) {
            board[i][j]=1;
            if(nQueen(board,n-1))
                return true;
            board[i][j]=0;
        }
    }
    return false;
}

void viewSolution(vector<vector<bool>> &board, int n) {
    int i,j;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            cout<<board[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main() {
    int n;
    cin>>n;
    vector<vector<bool>> board(n,vector<bool>(n));
    if(nQueen(board,n))
        viewSolution(board,n);
    else
        cout<<"Solution doesn't exist\n";
    return 0;
}