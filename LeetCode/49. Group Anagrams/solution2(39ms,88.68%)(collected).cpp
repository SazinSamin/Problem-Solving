class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) {


            unordered_map<string, vector<string>> group;

            // iterate over the words, first we save the original word, copy that & sort, so we find the 
            // similarity to found the anagram. 
            // Now, we use sort value as key, and push the corresponding original words in vector.
            // It will group the anagram in vetor.
      
            for(auto str: strs) {
                    string original = str;
                    sort(str.begin(), str.end());
                    group[str].push_back(original);
            }

      
           // push the anagram vector in res vector 
      
            vector<vector<string>> res;
            for(auto element: group) {
                    res.push_back(element.second);
            }
    
    
        return res;
    
    }
};
