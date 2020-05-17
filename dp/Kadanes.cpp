#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int kadans(int* arr,int n){
    int maxVal,currMax;
    maxVal=arr[0];
    currMax=arr[0];
    for(int i=1;i<n;i++){
        currMax=max(currMax+arr[i],arr[i]);
        if(currMax>maxVal){
            maxVal=currMax;
        }
    }
    return maxVal;
}
int main(){
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<kadans(arr,n)<<endl;
}
