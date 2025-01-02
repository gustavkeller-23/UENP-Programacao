#include <stdio.h>
#include <stdlib.h>

#define SIZE_NUMS 6

int main(){
    int nums[SIZE_NUMS] = {0,2,1,2,0,1};

    for (int i = 0; i < SIZE_NUMS-1; i++){
        for (int j = 1; j < SIZE_NUMS-i; j++){
            if (nums[j] < nums[j-1]){
                int aux = nums[j];
                nums[j] = nums[j-1];
                nums[j-1] = aux;
            }       
        }
    }

    return 0;
}



