class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
         
        vector<string> res;
                
                string first = words[0];
                res.push_back(first);
                sort(first.begin(), first.end());

                for(int i = 1; i < words.size(); i++) {
                        string temp = words[i];
                        sort(temp.begin(), temp.end());
                        if(first != temp) {
                                first = temp;
                                res.push_back(words[i]);
                        }
                }
                
                return res;
    }
};
