class Solution {
public:
    double myPow(double x, int n) {
        if(n<0) return 1/x * myPow(1/x, -(n+1));    // for n negative,
                                                    // return (1/x)*((1/x)^-(n+1))
        if(n==0) return 1;                          // if n is 0, return 1
        if(n==2) return x*x;                        // if n is 2, return x*x
        if(n%2==0) return myPow( myPow(x, n/2), 2); // if n is even, return (x^n/2)^2
        else return x*myPow( myPow(x, n/2), 2);     // if n is odd, x*(x^n/2)^2
    }
};