class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
         
                vector<string> str = words;
                vector<string> _final;

                for(int i = 0; i < words.size(); i++) {

                        string first = words[i];
                        
                        sort(first.begin(), first.end());
                        
                        if(_final.empty()) {
                                _final.push_back(words[i]);
                        } else {
                                string lastElement = _final.back();
                                sort(lastElement.begin(), lastElement.end());
                                if (first != lastElement) {
                                        _final.push_back(words[i]);
                                }
                        }
                }        

                return _final;
    }
};
