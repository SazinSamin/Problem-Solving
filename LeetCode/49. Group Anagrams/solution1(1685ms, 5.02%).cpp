class Solution {
public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> test = strs;

        for(int i = 0; i < test.size(); i++) {
                sort(test[i].begin(), test[i].end());
        }

        unordered_set<string> idx;
        vector<vector<int>> res;
        
        for(int i = 0; i < test.size(); i++) {
                vector<int> n1;
                string first = test[i];
                for(int j = 0; j < test.size(); j++) {
                        if(first == test[j]) {
                                n1.push_back(j);
                        }
                }
                if(idx.find(first) == idx.end()) {
                        idx.insert(first);
                        res.push_back(n1);
                }
        }

        vector<vector<string>> _final;
        for(int i = 0; i < res.size(); i++) {
                vector<string> temp;
                for(int j = 0; j < res[i].size(); j++) {
                        int idx = res[i][j];
                        temp.push_back(strs[idx]);
                }
                _final.push_back(temp);
        }

        return _final;
    }
};
