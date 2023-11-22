#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int i=0,j=0;
    vector<int> a1 = {1,3,5,7,9};
    vector<int> a2 = {2,4,6};
    vector<int> a3;

    while(i<a1.size() && j<a2.size()){
        if(a1[i]<a2[j]){
            a3.push_back(a1[i]);
            i++;
        }else{
            a3.push_back(a2[j]);
            j++;
        }
    }

    if(a1.size()>a2.size()){
        while(i<a1.size()){
            a3.push_back(a1[i]);
            i++;
        }
    }else{
        while(j<a2.size()){
            a3.push_back(a1[j]);
            j++;
        }
    }    

    for(int n:a3) cout<<n<<" ";

    return 0;
}