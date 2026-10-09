#include <stdio.h>

int nums[] = {2,534,73,2,7,68,8,43,4,21,4,93,85,2,42,3,97,864};
int target = 5;

/*
NOT COMPLETE
*/

void n_squared_complexity() {

    int size = sizeof(nums) / sizeof(nums[0]);

    for (int i=0;i<size;i++) {
        for (int k=0;k<size;k++) {
            if (nums[k] + nums[i] == target && i!=k) {
                printf("index 1: %d (%d), index 2: %d (%d), target: %d",i,nums[i],k,nums[k],target);
                return;
            }        
        }
    }
    printf("There is no pair");
    return;
}

int main() {
    n_squared_complexity();
}