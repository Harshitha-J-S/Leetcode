class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        sort(envelopes.begin(),envelopes.end(),[](const vector<int>& a,const        vector<int>& b){
            return a[0] < b[0] || a[0] == b[0] && a[1] > b[1];
        });

        vector<int> height;
        for(const auto& envelope : envelopes){
            height.push_back(envelope[1]);
        }
        vector<int> lis;
        for (int h : height) {
            auto it = lower_bound(lis.begin(), lis.end(), h);
            if (it == lis.end()) {
                lis.push_back(h);  // Extend LIS
            } else {
                *it = h;  // Replace existing value
            }
        }

    return lis.size();
    }
};