class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m = img.size();        
        int n = img[0].size();
        vector<vector<int>> result(m, vector<int>(n, 0));

         vector<pair<int, int>> directions = {
        {-1, -1}, {-1, 0}, {-1, 1},
        { 0, -1}, { 0, 0}, { 0, 1},
        { 1, -1}, { 1, 0}, { 1, 1}
    };
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            int totalSum = 0;   // Sum of valid neighbors
            int count = 0;      // Count of valid neighbors

            // Check all 9 directions
            for (auto [dx, dy] : directions) {
                int x = i + dx;
                int y = j + dy;

                // Check if neighbor is within bounds
                if (x >= 0 && x < m && y >= 0 && y < n) {
                    totalSum += img[x][y];
                    count++;
                }
            }

            // Calculate the smoothed value
            result[i][j] = floor(totalSum / count);
        }
    }

    return result;
    }
};

 
