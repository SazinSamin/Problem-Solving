class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int ransomLength = ransomNote.length();
        int magazineLength = magazine.length();

        vector<char> setMagazine;
        for(int i=0; i <magazineLength; i++) {
            // cout << magazine[i] << endl;
            setMagazine.push_back(magazine[i]);
        }

        int count  = 0;
        for(int i=0; i<ransomLength; i++) {
            char ran = ransomNote[i];
            auto it = find(setMagazine.begin(), setMagazine.end(), ran);
            if(it != setMagazine.end()) {
                // cout << *it << endl;
                setMagazine.erase(it);
                count++;
            }
        }


        return (count != ransomLength) ? false : true;
    }
};
