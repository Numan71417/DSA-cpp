#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<vector<int>>arr = { {1,2,3},{4,5,6},{7,8,9} };
    vector<vector<int>>arr2={};
    int row=arr.size();
    int col=arr[0].size();
    //printing matrix
    for(int r=0; r<row; r++){
        for(int c=0; c<col; c++){
            cout<<arr[r][c]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
       // In-place Transposing the matrix
    for (int i = 0; i < row; i++) {
        for (int j = i + 1; j < col; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }
    
    cout<<"after "<<endl;

      for(int r=0; r<row; r++){
        for(int c=0; c<col; c++){
            cout<<arr[r][c]<<" ";
        }
        cout<<endl;
    }

    return 0;
}   