#include<iostream>
#include<bits/stdc++.h>
using namespace std;

char findMaxOccurChar(string s){
    int a[26] = {0};

    for(int i=0; i<s.length(); i++){
        int n = s[i] - 'a';
        a[n]++;
    }
    //find max value in array

    int maxi = -1, ans=0;
    for(int i=0; i<26; i++){
        if(maxi<a[i]){
            ans=i;
            maxi = a[i];
        }
    }
    
    return 'a'+ ans;
}

int main(){

    string s;
    cout<<"Enter a string"<<endl;

    cin>>s;

    cout<<findMaxOccurChar(s)<<endl;
    cout<<'h'-'a';

    return 0;
}