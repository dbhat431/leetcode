int removeElement(int* nums, int numsSize, int val) {
    int c=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=val){
            nums[c]=nums[i];
            c=c+1;
        }
    }return c;
}