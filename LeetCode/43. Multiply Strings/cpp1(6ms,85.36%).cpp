class Solution {
public:

        string multiply(string num1, string num2) {
            
            if((num1) == "0" || num2  == "0") {
                return "0";
            } 

            int carry = 0, product = 0, pf = 0, last, carry2 = 0, last2, idx1, idx2;
            int ascii = 48;
            int length = 1000;
            int arr[length];
            for(int i = 0; i < length; i++) {
                arr[i] = 0;
            }


            for(int i = num2.size() - 1; i >= 0; i--) {
                    int j = num1.size() - 1;
                    int k = 1;
                    for(; j >= 0; j--) {
                        int n1 = num2[i] - ascii;
                        int n2 = num1[j] - ascii;
                        idx1 = length - k - pf;
                        product =  (n1 * n2) + arr[idx1] + carry;
                        last = product % 10;
                        carry = product / 10;
                        arr[idx1] = last;
                        k++;
                    }
                    if(carry) {
                            arr[length - k - pf] += carry;
                    }
                    carry = 0;
                    pf += 1;
            }
            string res = "";
            int flag = 0;
            for(int i = 0; i < length; i++) {
                    if(arr[i] != 0 || flag) {
                            res += arr[i] + 48;
                            flag = 1;
                    }
            }         
            return res;
        }
};
