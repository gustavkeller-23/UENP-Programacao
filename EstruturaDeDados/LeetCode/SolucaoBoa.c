#include <stdio.h>

#define SIZE_NUMS 6

int main(){
    int nums[SIZE_NUMS] = {0,2,1,2,0,1};
    int red = 0, white = 0, blue = 0; 

    for (int i = 0; i < SIZE_NUMS; i++){
        if (nums[i] == 0){red++;} 
        else if (nums[i] == 1){white++;} 
        else {blue++;}
    }
    
    for (int i = 0; i < red; i++)
        nums[i] = 0;
    for (int i = red; i < red+white; i++)
        nums[i] = 1;
    for (int i = red+white; i < SIZE_NUMS; i++)
        nums[i] = 2;

    return 0;
}

