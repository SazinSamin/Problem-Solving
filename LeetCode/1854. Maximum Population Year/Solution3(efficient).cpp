// https://www.youtube.com/watch?v=NW_CNIwP3_E
// this solution has coming from above video idea
// but there is a slight change, instead of counting back I use a variable count for counting the number of people alive
// during the years.

class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int arr[2051];
        for(int i = 1950; i <= 2050; i++) arr[i] = 0;

        for(int i = 0; i < logs.size(); i++) {
            arr[logs[i][0]] += 1;
            arr[logs[i][1]] -= 1;
        }

        int count = 0;
        int max = 0;
        int maxYear = 0;
        for(int i = 1950; i < 2050; i++) {
            count += arr[i];
            if(count > max) {
                max = count;
                maxYear = i;
            }
        }

        return maxYear;
    }
};
