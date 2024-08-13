#include <vector>
class Solution {
private :
    
void helper(int pos , int n , vector<int> &nums , vector<vector<int>> &ans)
{
    
    if(pos >= n)
    {
        ans.push_back(nums) ;
        return ;
    }
    
    for(int i = pos ; i < n ; i++)
    {
        swap(nums[pos] , nums[i]) ;
        
        helper(pos + 1 , n , nums , ans) ;
        
        swap(nums[pos] , nums[i]) ;
    }
    
    return ;
}
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
    vector<vector<int>> ans ;
    
    helper(0 , nums.size() , nums , ans) ;
        
    return ans ;
}
};