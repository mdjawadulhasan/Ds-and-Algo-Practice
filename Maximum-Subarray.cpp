class Solution {
public:
    int maxSubArray(vector<int>& v) {
        int best = INT16_MIN;
    int sum = 0;

    for (int k = 0; k < v.size(); k++)
    {
       
        sum = max(v[k], sum + v[k]);
        best = max(best, sum);
    
    }
        
        
        return best;
    }
};
