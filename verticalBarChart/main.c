#include <stdio.h>

int main() {
    // initialising array
    int nums[10] = {};
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &nums[i]);
    }

    // finding largest number in array
    int max[1] = {0};
    for (int i = 0; i < 10; ++i) {
        if (nums[i] > max[0]){
            max[0] = nums[i];
        }
    }
    int MAX = max[0];

    // comparing each element in array to max to either print "  " or "* "
    while (MAX > 0){
        for (int i = 0; i < 10; ++i) {
            max[0] = MAX;
            if (nums[i] >= max[0]){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
        --MAX;
    }
    return 0;
}
