// The greatest common divisor (GCD) of two or more integers, which are not all zero, is
// the largest positive integer that divides each of the integers. For example, the GCD of 8
// and 12 is 4, that is, gcd(8,12)=4. Euclid's algorithm is given in the pseudocode. Write the
// following algorithm in recursively.
  
// 1. input n,m
// 2. if n = m then STOP
// 3. if n is greater then m: do n = n-m
// 4. else do m = m-n
// 5. GOTO 2
// 6. print n or m


#include<stdio.h>

int findGCD(int n, int m){
        if(n == m){
                return n;
        }

        if(n > m){
                n = n - m;
        }else{
                m = m - n;
        }

        findGCD(n, m);
}

int main(){

        int n, m;
        printf("Enter two number: ");
        scanf("%d %d", &n, &m);
        int result = findGCD(n, m);
        printf("GCD of %d & %d = %d", n, m, result);
        return 0;
}





