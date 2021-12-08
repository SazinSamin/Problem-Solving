#include<stdio.h>
#include<math.h>

int main(){
        
        int n;
        printf("Enter dimension of Vector: ");
        scanf("%d", &n);
        int arrayA[n], arrayB[n];
        printf("Give input for arrayA: ");
        for(int i=1; i<=n; i++){
                scanf("%d", &arrayA[i]);
        }
        printf("Give input for arrayB: ");
        for(int i=1; i<=n; i++){
                scanf("%d", &arrayB[i]);
        }

        //  dot product of two product
        int sum = 0;
        for(int i=1; i<=n; i++){
                sum += arrayA[i] * arrayB[i];
        }

        printf("Dot product of two vector: %d\n", sum);


        // magnitude of vector a & b
        double sumMagA = 0, MagA, sumMagB = 0, MagB;
        for(int i=1; i<=n; i++){
                sumMagA += arrayA[i] * arrayA[i];
                sumMagB += arrayB[i] * arrayB[i];
        }

        // printf("SumMag: %lf %lf\n", sumMagA, sumMagB);
        MagA = sqrt(sumMagA);
        MagB = sqrt(sumMagB);

        // printf("MagA: %lf, MagB: %lf\n", MagA, MagB);

        double doMagnitude = MagA * MagB;
        // printf("dotMagnitude: %lf\n", doMagnitude);

        // angle
        double angleMulti = sum / doMagnitude;
        // printf("angleMuti: %lf", angleMulti);
        double theta = acos(angleMulti);

        // printf("Angle: %lf\n", theta);

        // radian to degree conversion
        double degreeAngle = theta * (180/3.1416);
        printf("Angle between two vecot: %lf", degreeAngle);

        return 0;
}
