#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k,c;

    cout<<"Enter size of array:\n";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter a value to find in array\n";
    cin>>k;

    for(int i=0;i<n;i++){
        if(arr[i]!=k){
            continue;
        }
        c++;
        
    }
    
    if(c>0){
        cout<<"Key element found and number of duplicate key value is "<<c<<endl;
    }
    else{
        cout<<"Key element not found\n";
    }
}
