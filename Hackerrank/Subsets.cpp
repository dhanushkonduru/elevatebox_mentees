#include <vector>
class Solution {    
private :
    
void helper(int i , vector<int> &subSet , vector<int> &nums , vector<vector<int>> &ans)
{

    if(i == nums.size() )
    {
        ans.push_back(subSet) ;
        return ;
    }
    
    subSet.push_back(nums[i]) ;
    
    helper(i + 1 , subSet , nums , ans) ;
    
    
    subSet.pop_back() ;

    
    helper(i + 1 , subSet , nums , ans) ;
    
    return ;
}
    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
    vector<vector<int>> ans ;
    vector<int> subSet ;
        
    helper(0 , subSet , nums , ans) ;
    
    return ans ;
}
};
