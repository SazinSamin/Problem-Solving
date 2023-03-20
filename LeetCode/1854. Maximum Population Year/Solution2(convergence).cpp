// This approch is depend on convergence
// At first we take array from 1950 to 2050(given constraints)
// each index is an year(from 1950 to 2050)
// we fill the array with zeros
// then traverse the given logs array, and increase the array indexes values
//  of a person birth date to demise date by 1
// do for all the logs value
// If a person birth date is ahead of another person demise, it will converge and index value will increases.
// find the firstr index with maximum value and the index number is the result year


class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int arr[2050];
        for(int i = 1950; i < 2050; i++) arr[i] = 0;

        for(int i = 0; i < logs.size(); i++) {
            for(int j = logs[i][0]; j < logs[i][1]; j++) {
                arr[j] += 1;
            }
        }

        int max = 0;
        int maxYear = 0;
        for(int i = 1950; i < 2050; i++) {
            if(arr[i] > max) {
                max = arr[i];
                maxYear = i;
            }
        }

        return maxYear;
    }
};
