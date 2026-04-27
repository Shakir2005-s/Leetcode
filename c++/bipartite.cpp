class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n, 0); 

        for (int i = 0; i < n; ++i) {
            if (color[i] != 0) continue; 

            stack<int> s;
            s.push(i);
            color[i] = 1;

            while (!s.empty()) {
                int curr = s.top();
                s.pop();

                for (int neighbor : graph[curr]) {
                    if (color[neighbor] == 0) {          
                        color[neighbor] = -color[curr]; 
                        s.push(neighbor);
                    } else if (color[neighbor] == color[curr]) { 
                        return false; 
                    }
                }
            }
        }
        return true;
    }
};
