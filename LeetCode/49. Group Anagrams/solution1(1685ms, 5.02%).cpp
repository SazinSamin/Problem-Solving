class Solution {
public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> test = strs;

        // sort all the words to get the a common between thems.
        for(int i = 0; i < test.size(); i++) {
                sort(test[i].begin(), test[i].end());
        }

        unordered_set<string> idx;
        vector<vector<int>> res;
        
        for(int i = 0; i < test.size(); i++) {
                vector<int> n1;
                // get the target
                string first = test[i];
                for(int j = 0; j < test.size(); j++) {
                        // find the target every indexes & push the location to the vector
                        if(first == test[j]) {
                                n1.push_back(j);
                        }
                }
                // as we some words repeat many time for sorting
                // here we unordered_set to find out that in previouly we encouter this words or not
                // if we are not encounter this words then we insert this on the unordered_set & also we push
                // the indexes of that words.
                if(idx.find(first) == idx.end()) {
                        idx.insert(first);
                        res.push_back(n1);
                }
        }

        vector<vector<string>> _final;
        // get the words from the from the indexes & push them for final result.
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
