#include <iostream>
#include <unordered_map>
#include<vector>
using namespace std;

/*using unordered_map/hashing
void freq(int arr[],int n){
    unordered_map<int ,int> hash;
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    int min =1,max=1;
    int key,key1;
    for(auto x : hash){
        if(max <=x.second) {
            max=x.second;
            key=x.first;
        }
        if(min >=x.second) {
            min =x.second;
            key1=x.first;
        }

    }
    cout<<"the highest freq element is "<<key<<"i.e freq "<<max<<endl;
    cout<<"the lowest freq element is "<<key1<<"i.e freq "<<min<<endl;


}
    */

void freqcount(int arr[],int n){
    int max=1,min=1;
    int highno,lowno;
    vector<bool> visited(n,false);
    for(int i=0;i<n;i++){
        if(visited[i]==true) continue;
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                visited[j]=true;
                count+=1;
            }
        }
        if(count>=max){
            max=count;
            highno=arr[i];
        }
        if(count<=min){
            min=count;
            lowno=arr[i];
        }
    }
    cout<<"the highest freq no is "<<highno<<" freq having "<< max<<endl;
    cout<<"the lowest freq elemnt is "<<lowno<<" freq having "<<min<<endl;

}
int main(){
    int arr[6]={10,5,10,15,10,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    freqcount(arr,n);
    return 0;
}