#include<iostream>
using namespace std;


int main(){

    int n,k,b=0,i=0,c;

    cout<<"Enter size of array:\n";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array:\n";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter a value to find in array\n";
    cin>>k;

    int end=n-1,st=0;
    for(i=0;i<n;i++){
        int mid=(end+st)/2;
        if(arr[mid]==k){
            c++;
            b++;
            break;
        }
        else if(arr[mid]> k){
            c++;
            end=mid-1;
        }
        else{
            c++;
            st=mid+1;
        }
        if(st>end){
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
