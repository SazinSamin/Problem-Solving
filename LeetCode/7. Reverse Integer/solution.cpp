class Solution {
public:
    int reverse(int x) {
        
                        unsigned int sign = 0;
        
        
                        if(x < 0){
                                sign = 1;
                                x = abs(x);
                        }
        
                        unsigned long long result = 0;
                        while(x > 0){
                                int y = x % 10;
                                x  = x / 10;
                                
                                // cout << "y: " << y << endl;
                                
                                if(result * 10 < INT_MAX){
                                    result =  result * 10 + y;
                                }else{
                                    return 0;
                                }
                               
                        }
                        
                        if(sign == 1){
                                result = -result;
                        }
                        //cout << "result: " << result << endl;
                        return result;
    }
};
