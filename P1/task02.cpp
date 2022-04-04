#include<iostream>
using namespace std;
    int linerar_search(int arr[],int k,int i,int n){
        if(i>n){
            return 0;
        }
        else if(arr[i]==k){
            return i+1;
        }
        else{        
           return(linerar_search(arr,k,i+1,n));
        }
    }


int main(){

    int n,k,i=0;

    cout<<"Enter size of array:\n";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array:\n";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    i=0;
    cout<<"Enter a value to find in array\n";
    cin>>k;

    int c=linerar_search(arr,k,i,n);
    if(c>0){
        cout<<"Key element found in "<<c<<" comparison\n\n";
    }
    else{
        cout<<"Key element not found\n";
    }
}
