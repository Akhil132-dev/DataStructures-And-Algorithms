Two pointes
 
delete all the duplicate form the sorted array

        set<int>s;
        for(int i=0;i<nums.size();i++){
s.insert(nums[i]);
        }
        nums.clear();
        for(auto i:s){

        nums.push_back(i);};
        return s.size();
    }


    if(nums.lenght==0)return 0;
        int j = 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[j]){
                j++;
            nums[j]=nums[i];}
}
        return i+1;}



2)three sum  = 0;
      
            (Zero tripalte)

 vector<vector<int>> res; 
        sort(num.begin(), num.end()); 
        
        // moves for a
        for (int i = 0; i < (int)(num.size())-2; i++) {
            
            if (i == 0 || (i > 0 && num[i] != num[i-1])) {
                
                int lo = i+1, hi = (int)(num.size())-1, sum = 0 - num[i];
                
                while (lo < hi) {
                    if (num[lo] + num[hi] == sum) {
                        
                        vector<int> temp; 
                        temp.push_back(num[i]); 
                        temp.push_back(num[lo]); 
                        temp.push_back(num[hi]); 
                        res.push_back(temp);
                        
                        while (lo < hi && num[lo] == num[lo+1]) lo++;
                        while (lo < hi && num[hi] == num[hi-1]) hi--;
                        
                        lo++; hi--;
                    } 
                    else if (num[lo] + num[hi] < sum) lo++;
                    else hi--;
               }
            }
        }
        return res;


2 ) mex consecutive ones
int count = 0;
        int maxi = 0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==1)
                count++;
            else count = 0;
            maxi  = max(maxi,count);
        }
        
        return maxi;
    }
