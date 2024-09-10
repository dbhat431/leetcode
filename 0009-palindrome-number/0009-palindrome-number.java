class Solution {
    public boolean isPalindrome(int x) {
        if (x<0){
            return false;
        }
        int reverse=0;
        int temp=x;
        while(temp>0){
            int d=temp%10;
            reverse=reverse*10+d;
            temp=temp/10;
        }
        if (reverse==x){
            return true;
        }else{
            return false;
        }
    }
}