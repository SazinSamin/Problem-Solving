#include<iostream>
#include<climits>
using namespace std;

class Solution{
        public:
                int reverse(int x){

                        long result = 0;

                        while(x != 0){
                                int y = x % 10;
                                x  = x / 10;
                                                                
                                if(result * 10 < INT_MAX){
                                    result = result *10 + (y);
                                }else{
                                    return 0;
                                }
                        }
                        return result;
        }
};

int main(){
        int x;
        cin >> x;
        Solution s;
        cout << s.reverse(x);
}
