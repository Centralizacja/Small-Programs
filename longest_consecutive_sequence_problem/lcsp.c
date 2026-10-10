#include <stdio.h>

int nums[] = {1,2,3,4,2,427,2435,32,3,7,57,4,2,4,5,6,7,8};
int counter,record,size;

int lcsp() {
    counter=1;
    record=1;
    size=sizeof(nums)/sizeof(nums[0]);
    for (int i=1;i<size;i++) {
        if ((nums[i]-1)==nums[i-1]) {
            ++counter;
            record = (counter>=record) ? counter : record;
        }
        else {
            counter=1;
        }
    }
    return record;
}


int main() {

    printf("%d", lcsp());
    return 0;

}