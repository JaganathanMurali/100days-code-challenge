class Solution {
public:
    int fib(int n) {
        int f0 = 0, f1 = 1, a = 0;
        if(n == 1)
            return 1;
        for(int i = 1; i<n; i++){
            a = f0 + f1;
            f0 = f1;
            f1 = a;
        }
        return a;
    }
};
