/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long left = 0, right = n, r = guess(n);
        while(r != 0)
        {
            if(r == 1)
                left = n + 1;
            else if(r == -1)
                right = n - 1;

            n = (left + right)/2;
            r = guess(n);
        }

        return n;
    }
};
