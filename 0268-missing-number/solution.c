int missingNumber(int* nums, int numsSize) {
    int add = 0,sum = 0;
    sum = (numsSize * (numsSize + 1)) / 2;
    for(int i=0 ; i<numsSize ; i++){
        add = nums[i] + add;
    }
    return sum - add;
}
