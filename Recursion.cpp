#include<iostream>
#include<vector>
#include<utility>
using namespace std;
void reverse(int i ,int arr[],int n){
    if(i>=n/2) return ;
    swap(arr[i],arr[n-i-1]);
    reverse(i+1,arr,n);
    
}
/*
gives o/p:
5 4 3 2 1 */
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverse(0,arr,n);
    cout<<"Reversed array is : ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}

