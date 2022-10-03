#include<iostream>
using namespace std;
int main(){
    int n, c=0;

    cout<<"Enter size of array:\n";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=1;i<n; i++){
        int current = arr[i];
        int j=i-1;

        while(arr[j] > current && j >= 0) {
            arr [j+1]=arr[j];
        j--;
        c++;
        }
    arr [j+1]=current;
    }
    cout<<"sorted array is:\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Total comparison: "<< c <<endl;

}

