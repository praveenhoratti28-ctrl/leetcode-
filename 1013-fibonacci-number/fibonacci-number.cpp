class Solution {
public:
    int fib(int n) {
        int n1=0;
        int n2=1;
        if(n==n1)
        return 0;
        else if(n==n2)
        return 1;
        else
        return (fib(n-1)+fib(n-2));
    }
};