// found in youtube, but doesn't work in leetcode
// https://www.youtube.com/watch?v=tm1Yrb_SfBM

class Solution{
        public:
                int reverse(int x){
                        int result = 0;
                        while(x != 0){
                                int pop = x % 10;
                                int newResult = result * 10 + pop;
                                if(result != (newResult - pop) / 10){
                                        return 0;
                                }
                                x = x / 10;
                                result = newResult;
                        }
                return result;
        }
};

