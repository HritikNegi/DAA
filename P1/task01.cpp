#include<iostream>
using namespace std;
int main(){

    int n, c=0,k,b=0;

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
        c++;
        if(arr[i]==k){
            b++;
            break;
        }
        
    }
    if(b>0){
        cout<<"Key element found in "<<c<<" comparison\n\n";
    }
    else{
        cout<<"Key element not found\n";
    }

}

