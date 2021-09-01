#include<iostream>
using namespace std;

int main(){
        //freopen("file.txt", "r", stdin);
        int arr[] = { 1,64,729,4096,15625,46656,117649,262144,531441,1000000,1771561,
        2985984,4826809,7529536,11390625,16777216,24137569,34012224,47045881,64000000, 
        85766121 } ;

        int n;
        int length = sizeof(arr) / sizeof(arr[0]);
                
        while(cin>>n && n){
                int flag = 0;
                for(int i=0; i<length; i++){
                        if(n == arr[i]){
                                flag = 1;
                                break;
                        }
                }
                if(flag == 1)
                        cout<<"Special"<<endl;
                else
                        cout<<"Ordinary"<<endl;
        }
}


//Another solution---->>>
/*
	int n;
        while(cin>>n && n){
                int d1 = pow(0.5 , n);
                int d2 = pow(0.3 , n);
                while(d1 * d1 < n)
                        d1++;
                while(d2 * d2 * d2 < n)
                        d2++;
                if(d1*d1 == n && d2*d2*d2 == n)
                        cout<<"Special"<<endl;
                else
                        cout<<"Ordinary"<<endl;
}
*/
