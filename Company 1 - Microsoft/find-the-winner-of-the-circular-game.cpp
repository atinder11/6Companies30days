#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    static int findTheWinner(int n, int k) {
       if (n==1) return 1;
       return (findTheWinner(n-1, k)+(k-1))%n+1;
    }
};



    
int main(){
    
    
return 0;
    
}