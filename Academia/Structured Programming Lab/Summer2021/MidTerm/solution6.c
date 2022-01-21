// Write a program to generate all combinations of 4, 5 and 6 using for loop.


#include<stdio.h>

int main(){

        int length = 3;
        int array[length] = {4, 5, 6};
        int selectedItem1, selectedItem2, selectedItem3;
        int count = 0;


        for(int i=0; i<length; i++){
                selectedItem1 = array[i];
                //printf("%d", selectedItem1);


                for(int j=0; j<length; j++){
                        selectedItem2 = array[j];
                        if(selectedItem1 != selectedItem2){
                                //printf("%d", selectedItem2);


                                for(int k=0; k<length; k++){
                                selectedItem3 = array[k];
                                if(selectedItem1 != selectedItem3 && selectedItem2 != selectedItem3){
                                        printf("%d %d %d\n", selectedItem1, selectedItem2, selectedItem3);
                                }
                        }
                        }
                }
        }
}
