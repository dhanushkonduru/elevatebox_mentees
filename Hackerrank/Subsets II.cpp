class Solution {
private :
    
void helper(int i , vector<int> &subset , vector<int> &nums , vector<vector<int>> &ans)
{
    if(i >= nums.size() )
    {
        ans.push_back(subset) ;
        return ;
    }
    
    subset.push_back(nums[i]) ;
    
    helper(i + 1 , subset , nums , ans) ;
    
    subset.pop_back() ;
    
    while(i < nums.size() - 1 && (nums[i] == nums[i + 1] ) )
    {
        i++ ;
    }
    
    helper(i + 1 , subset , nums , ans) ;
    
    return ;
}
    
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
    sort(nums.begin() , nums.end() ) ;
        
    vector<int>subset ;
        
    vector<vector<int> > ans ;
        
    helper(0 , subset , nums , ans) ;
        
    return ans ;
}
};