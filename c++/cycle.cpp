class Solution {
public:
    bool containsCycle(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> visited(m, vector<int>(n, 0));
       
        int row[4] = {1, -1, 0, 0};
        int cols[4] = {0, 0, 1, -1};

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (visited[i][j]) continue;
            
                stack<vector<int>> s;
                s.push({i, j, -1, -1});
                visited[i][j] = 1;

                while (!s.empty()) {
                    vector<int> curr = s.top();
                    s.pop();
                    
                    int rw = curr[0], cl = curr[1], pr = curr[2], pc = curr[3];
                    char value = grid[rw][cl];

                    for (int k = 0; k < 4; ++k) {
                        int ri = row[k] + rw;
                        int ci = cols[k] + cl;

                        if (ri < m && ri >= 0 && ci < n && ci >= 0 && grid[ri][ci] == value) {
                            
                        
                            if (visited[ri][ci] == 1 && (ri != pr || ci != pc)) {
                                return true;
                            }
                         
                            if (visited[ri][ci] == 0) {
                                visited[ri][ci] = 1;
                                s.push({ri, ci, rw, cl});
                            }
                        }
                    }
                }
            }
        }
        return false;
    }
};
