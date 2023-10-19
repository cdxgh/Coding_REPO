#include <iostream>
using namespace std;

	vector<int>ans;
    int nums[n];

  int c1 = INT_MIN;
        int l1 = 0;
        
        int c2 = INT_MIN;
        int l2 = 0;
       

        for(int i =0; i<n; ++i){
            if(nums[i] == c1){
                l1++;
            }
            else if(nums[i] == c2){
                l2++;
            }
            else if(l1==0){
               c1 = nums[i];
                l1 =1;
            }
            else if(l2==0){
               c2 = nums[i];
                l2=1;
            }
            else{
                l1--;
                l2--;
            }

        }
        int cnt1 =0;
        int cnt2 = 0;
        for(int i =0; ){
        if(c1==nums[i])cnt1++;
        if(c2==nums[i])cnt2++;           
        }
        if(cnt1>n/3) ans.push_back(c1);
        if(cnt2>n/3) ans.push_back(c2);
        return ans;