#include<stdio.h>

int main(){
        int n, k;
        scanf("%d %d", &n, &k); 
        int maxAnd = 0, maxOr = 0, maxXor = 0;
        for(int i=1; i<=n; i++){
                for(int j=i+1; j<=n; j++){
                        //maxAnd
                        if((i & j) > maxAnd && (i & j) < k){
                               maxAnd = i & j;
                        }

                        //maxOr
                        if ((i | j) > maxOr && (i | j) < k){
                                maxOr = i | j;
                        }

                        //maxXor
                        if ((i ^ j) > maxXor && (i ^ j) < k){
                                maxXor = i ^ j;
                        }
                }
        }
        
        printf("%d\n%d\n%d", maxAnd, maxOr, maxXor);
}

