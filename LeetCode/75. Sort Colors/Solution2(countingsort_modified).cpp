class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> count(3, 0);
        // couting the number of occurances of each element
        for(int i = 0; i < nums.size(); i++) {
                count[nums[i]]++;
        }
        int i = 0, j = 0;
        // now put the count ascending to the array, i variable for array element(0, 1, 2)
        // j variable for keep the counting of the given array indexes(0...nums.size())
        // reduce the element count(count[i]--) after puting it into the array
        while(i < 3) {
                if(count[i] > 0) {
                        nums[j++] = i;
                        count[i]--;
                } else {
                        i++;
                } 
        }
    }
};
