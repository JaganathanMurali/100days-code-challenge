class Solution {
public:
    int f0=0, f1=1, a= 0;
    int fib(int n) {
        if(n == 1)
            return f1;
        else if(n <= 0)
            return f0;
        else
            return fib(n-1) + fib(n-2);
    }
};
