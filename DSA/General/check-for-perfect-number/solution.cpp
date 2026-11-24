class Solution {
public:
    bool isPerfect(int n) {
        int sum = 0;
        int number = n;
        for(int i=1 ; i<n ; i++)
        {
            if(n%i == 0)
            {
                sum = sum + i;
            }
        }
        return sum == number;

    }
};