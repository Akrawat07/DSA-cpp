#include<iostream>
#include<vector>
#include<utility>
using namespace std;
/*void reverse(int i ,int arr[],int n){
    if(i>=n/2) return ;
    swap(arr[i],arr[n-i-1]);
    reverse(i+1,arr,n);
    
}
gives o/p:
5 4 3 2 1 */

void palindrome(int i,string str,int n){
    if (i>=n/2)return ;
    if(str[i]==str[n-i-1]){
        cout<<"yes"<<endl;
        return ;
    }
    else cout<<"no"<<endl;

}
int main(){

    string str;
    cout<<"Enter the string:";
    cin>>str;
    int n=str.length();
    
    cout<<"palindrome or not: ";
    palindrome(0,str,n);
    return 0;
}

