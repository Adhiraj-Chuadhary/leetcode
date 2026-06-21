class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false ;
        int reverse = 0;
        int copy = x;
        while(copy!=0){
            int ld = copy%10;
            if((reverse > INT_MAX/10)||(reverse < INT_MIN/10)){
                return 0;
            }
            reverse = reverse*10 + ld;
            copy = copy/10;
        }
        return reverse==x;

    }
};