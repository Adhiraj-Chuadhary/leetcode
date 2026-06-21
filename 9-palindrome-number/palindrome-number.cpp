class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false ;
        long reverse = 0; 
        int copy = x;
        while(copy!=0){
            int ld = copy%10;
            reverse = reverse*10 + ld;
            copy = copy/10;
        }
        return reverse==x;

    }
};