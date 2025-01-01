#include<bits/stdc++.h>
using namespace std;
    

class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
       
        int xclosest=max(x1,min(x2,xCenter));
        int yclosest=max(y1,min(y2,yCenter));
        int xdis=xCenter-xclosest;
        int ydis=yCenter-yclosest;
        if(xdis*xdis+ydis*ydis<=radius*radius){
            return true;
        }
        return false;
        
    }
};
int main(){
    
    
return 0;
    
}

