class Solution(object):
    def fizzBuzz(self, n):
        ans = [''] * n
        for i in range(0,n):
            if ((i+1)%3 == 0):
                 ans[i] = ans[i] + "Fizz"
            if ((i+1)%5 == 0):
                 ans[i] = ans[i] + "Buzz"
            if ((i+1)%3 != 0 and (i+1)%5 != 0):
                 ans[i] = str(i+1)

        return ans

        
