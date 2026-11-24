class Solution {
public:
    int reverseNumber(int n) {
      
       int revdig = 0;
       
       while(n!=0)
       {
        int digit = n%10;
        if( revdig > INT_MAX /10 || revdig < INT_MIN /10)
        {
            return 0;
        }
        revdig =( revdig * 10 )+ digit ;
        n = n/10;
       }
       return revdig;
    }
};