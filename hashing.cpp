#include<iostream>
#include<vector>
#include <unordered_map>

using namespace std;

vector<int> twosum(vector<int> nums,int target){
    unordered_map<int,int> m;
    for (int i : nums){
        m[nums[i]]=i;
    }
    for(int i=0;i<m.size();i++){
        int other=target-nums[i];
        if(m.find(other)!=m.end() && m[other]!=i){
            return {i,m[other]};
        }
        
    }
    return {};
}
int main(){
    vector<int> nums={2,7,11,15};
    int target=9;
    vector<int> result=twosum(nums,target);
    for(int i:result){
        cout<<i<<" ";
    }
    return 0;
}

    
