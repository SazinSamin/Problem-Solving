// Generate 100 random integer and 100 random floating point numbers and save them in
// separate file. Write two separate functions to generate numbers and save integer in
// integer.txt, float in float.txt.


#include<stdio.h>
#include<stdlib.h>

void randomIntGenerator(){
        FILE *fptr1;
        fptr1 = fopen("randomInt.txt", "w");

        int r1;
        for(int i=0; i<100; i++){
                r1 = rand();
                fprintf(fptr1, "%d\n", r1);
        }
}

void randomFloatGenerator(){
        FILE *fptr2;
        fptr2 = fopen("randomFloat.txt", "w");
        float f1;
        for(int i=0; i<100; i++){
                f1 = (float)rand() / RAND_MAX;
                fprintf(fptr2, "%f\n", f1);
        }
}

int main(){
        randomIntGenerator();
        randomFloatGenerator();
        return 0;
}
