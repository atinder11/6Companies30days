#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string>ans;
        if(s.length()<=10){
            return ans;


        }
        unordered_map<string,int>mpp;
        for(int i=0;i<=s.length()-10;i++){
            string h=s.substr(i,10);
            mpp[h]++;

        }
        for(auto x:mpp){
            if(x.second>1){
                ans.push_back(x.first);

            }
        
        }
        return ans;

    }
};
    
int main(){
    
    
return 0;
    
}