class Solution {
public:
    int GCD(int n1,int n2) {
      int min = 0;
      int gcd = 0;
      if(n1 < n2) min = n1;
      else  min = n2;
      
      for(int i=min ; i>=1 ; i--)
      {
        if(n1%i==0 && n2%i==0)
        {
             gcd = i;
            break;
        }
      }
      return gcd;
    }
};