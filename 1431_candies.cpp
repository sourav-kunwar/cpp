class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int ec) {
        vector<bool> result(candies.size());
        int maxi = *max_element(candies.begin(),candies.end());

        for(int i = 0; i < candies.size(); i++)
        {
            if(candies[i] + ec >= maxi)
                result[i] = true;
            
            else
                result[i] = false;
        }

        return result;
    }
};