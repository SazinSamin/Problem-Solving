#include<iostream>
using namespace std;

int main(){
        int Z, I, M, L;
        int times = 0;
        //freopen("file.txt", "r", stdin);
        while(scanf("%d %d %d %d", &Z, &I, &M, &L) && Z && I && M && L){

        int slow = L;
        int fast = L;
        int count = 0;
        while(true){
                slow = ((Z*slow) + I) % M;
                fast = ((Z * (((Z * fast) + I) % M) + I) % M);
                count++;
                if(slow == fast){
                        break;
                } 
        }
        
        cout<<"Case "<<++times<<": "<<count<<endl;
        }
}
