#include<bits/stdc++.h>
using namespace std;
    

class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>ans(n,0);
        int k=1;
        int i=n-1;
        while(k<n){
            ans[k]=nums[i];
            i--;
            k+=2;

        }

        int j=0;
        while(j<n){
            ans[j]=nums[i];
            i--;
            j+=2;
        }
        nums=ans;
        
        

        
    }
};
int main(){
    
    
return 0;
    
}