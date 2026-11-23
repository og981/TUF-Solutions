class Solution {
public:
    bool isArmstrong(int n) {
        int sum = 0;
        int number = n;

        int digits = 0;
        int temp = n;

        while (temp != 0) {
            digits++;
            temp = temp / 10;
        }

        while (n != 0) {
            int digit = n % 10;
            int power = 1;

            for (int i = 0; i < digits; i++) {
                power = power * digit;
            }

            sum = sum + power;
            n = n / 10;
        }

        return sum == number;
    }
};