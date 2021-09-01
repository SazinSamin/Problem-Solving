Dhaka regional ICPC 2017
#include<iostream>
using namespace std;

int main(){
        freopen("file2.txt", "r", stdin);
        int n; cin>>n;
        for(int i=1; i<=n; i++){
                int d, m, y, ly, count  = 0;
                cin>>d>>m>>y>>ly;
                if(d == 29 && m == 2){
                        for(int j=y; j<=ly; j+=4){
                                if((j%4 == 0 && j%100 !=0) || j%400 == 0){
                                        count++;
                                }
                        }
                        cout<<"Case "<<i<<": "<<count-1<<endl;
                }else{
                        cout << "Case " << i << ": " << ly - y<<endl;
                }
        }


}
