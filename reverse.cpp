#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void printloop(vector<int> a){
    for(int i=0; i<a.size(); i++)
         cout<<a[i]<<" ";
}

int main(){

    int n=5;
    vector<int> a;

    a.push_back(11);
    a.push_back(7);
    a.push_back(3);
    a.push_back(12);
    a.push_back(4);


    int s=0,e=n-1;

    cout<<"Before reversing"<<endl;
    printloop(a);

    while(s<e){
        swap(a[s],a[e]);
        s++;
        e--;
    }

    cout<<endl<<"After reversing"<<endl;
    printloop(a);

    return 0;
}