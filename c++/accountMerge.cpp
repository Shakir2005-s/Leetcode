class Solution {
public:
    unordered_set<string>visited;
     unordered_map<string,vector<string>>adlist;
     void DFS(vector<string>& mergedAccount, string& email) {
        visited.insert(email);
        mergedAccount.push_back(email);
        
        for (string& neighbor : adlist[email]) {
            if (visited.find(neighbor) == visited.end()) {
                DFS(mergedAccount, neighbor);
            }
        }
    }
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        int m=accounts.size();
    
        for(int i{};i<m;++i)
        {
            string firstEmail=accounts[i][1];
            int n=accounts[i].size();
            for(int j{1};j<n;++j)
            {
                adlist[firstEmail].push_back(accounts[i][j]);
                adlist[accounts[i][j]].push_back(firstEmail);
            }
        }
        vector<vector<string>>merged;
        for(int i{};i<m;++i)
        {
                string accountName=accounts[i][0];
                string firstEmail=accounts[i][1];
                if(visited.find(firstEmail)==visited.end())
                {
                    vector<string>mergedAccount;
                mergedAccount.push_back(accountName);
                DFS(mergedAccount,firstEmail);
                 sort(mergedAccount.begin() + 1, mergedAccount.end());
                 merged.push_back(mergedAccount);
                }
        }
        return merged;


        
            
        }
        
    
};