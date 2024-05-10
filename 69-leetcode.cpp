class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x;

        // Newton's method!! 

        double guess = x, n_guess = (guess + x / guess) / 2.0;
        while (abs(guess - n_guess) >= 1) 
        {
            guess = n_guess;
            n_guess = (guess + x / guess) / 2.0;
        }
        return (int)n_guess;
    }
};
