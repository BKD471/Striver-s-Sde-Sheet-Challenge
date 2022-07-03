#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        
       int n=nums.size();
        
        
        int up=1,down=1;
        
        
        for(int i=0;i<n-1;i++){
            
            if(nums[i+1]>nums[i]) up=down+1;
            else if(nums[i+1]<nums[i]) down=up+1;
        }
       
        return max(up,down);
    }
};