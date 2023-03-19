// https://tutorialcup.com/leetcode-solutions/maximum-population-year-leetcode-solution.htm
// this solution has sligt change from this website.
// instead of traverse all the years from 1950-2050, we just traverse the only years has given in the "logs"

class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        map<int, int> years;

        for(int i = 0; i < logs.size(); i++) {
            for(int j = 0; j < logs[i].size(); j++) {
                years.insert(make_pair(logs[i][j], 0));
            }
        }

        for(int i = 1950; i <= 2050; i++) {
            for(int j = 0; j < logs.size(); j++) {
                vector<int> year = logs[j];
                if(i >= year[0] && i < year[1]) {
                    auto it = years.find(i);
                    it->second += 1;
                }
            }
        }

        int max = 0, count = 0;
        for(auto it = years.begin(); it != years.end(); it++) {
            if (it->second > count ) {
                count = it->second;
                max = it->first;
            }
        } 

        return max;
    }
};
