#include <stdio.h>

int main(){
        
        int n1, n2;
        scanf("%d %d", &n1, &n2);
        char numberArray[][10] = {
            "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

        for(int i=n1; i<=n2; i++){
                if(i<=9){
                        printf("%s\n", numberArray[i-1]);
                }else{
                        (i % 2 == 0) ? printf("even\n") : printf("odd\n");
                }
        }
}

