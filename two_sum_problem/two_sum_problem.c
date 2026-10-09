#include <stdio.h>

/*
NOT COMPLETE
*/

char* n_squared_complexity(int nums[], int target, char s[]) {
    char* p;

    for (int i=0;i<sizeof(nums);i++) {
        for (int k=0;k<sizeof(nums);k++) {
            if (nums[k] + nums[i] == target && i!=k) {
                
                p = &("index 1: %d (%d), index 2: %d (%d), target: %d", (char) i, (char) nums[i], (char) k, (char) nums[k], (char) target);
                return p;
            }        
        }
    }
    p = "There is no pair";
    return p;
}

int main() {



    char s[100];
    char* p;


    int nums[] = {2,534,73,2,7,68,8,43,4,21,4,93,85,2,42,3,97,864};
    int target = 536;
    p = n_squared_complexity(nums,target,s);
    printf("%s",p);

}