#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;
/*using brute force
void freq(int arr[],int n){
    vector<bool> visited(n,false);
    for (int i=0;i<n;i++){
    
        int count=1;
        if (visited[i]==true){
                continue ;
            }
        for(int j=i+1;j<n;j++){
            
            
             //to count freq

            if(arr[i]==arr[j]){
                visited[j]=true;
                count++;
            }
            
            
        }
        cout<<arr[i]<<" appears "<<count<<" times"<<endl;

    }
}*/



void freq(int arr[],int n){
    unordered_map<int ,int > hash;
    for (int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    for (auto x: hash){
        cout<< x.first<<" appears "<<x.second<<" times"<<endl;
    }
}
int main(){
    int arr[]={10,2,10,7,6};
    int n=sizeof(arr)/sizeof(arr[1]);
    freq(arr,n);
    return 0;
}