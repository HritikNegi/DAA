//#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int jump_search(int arr[],int n,int k){

    int p=0,cmp=0;
    int i=0;
    while(i<n){
        i = pow(2,p);
        if(i>=n){
            break;
        }
        else if(arr[i] == k){
            return 1;
        }
        else if(arr[i] > k){
            break;
        }
       
        p++;
        cmp++;
    }
    int st=pow(2,p-1)-1;
    int end=pow(2,p)-1;
    if(st < 0){
        st=0;
    }
    while(st < n && st <= end){
        if(arr[st]==k){
            break;
        }
        st++;
        cmp++;
    }
    if(st >= n || st > end){
        return 0;
    }
    else{
        cout<<"total count"<<cmp<<endl;
        return 1;
    }
}

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

    c=jump_search(arr,n-1,k);

    if(c>0){
        cout<<"Key element found \n";
    }
    else{
        cout<<"Key element not found\n";
    }
}
