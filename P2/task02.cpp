#include<iostream>
using namespace std;

int binary_search(int arr[],int end,int st,int k){

        int mid=st+(end-st)/2;
        
        if(st>end){
        return 0;
        }
        else if(arr[mid]==k){
            return 1;
        }
        else if(arr[mid] > k){
            return(binary_search(arr,mid-1,st,k));
        }       
        else { 
           return(binary_search(arr,end,mid+1,k));
        }
}

int main(){

    int n,k,i=0,c;

    cout<<"Enter size of array:\n";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array:\n";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter a value to find in array\n";
    cin>>k;

    c=binary_search(arr,n-1,0,k);
        
    if(c>0){
        cout<<"Key element found \n";
    }
    else{
        cout<<"Key element not found\n";
    }
}
