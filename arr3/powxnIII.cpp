class Solution {
public:
    double myPow(double x, long n) {// long n required because
                                    // we need -n in range <-----
        x = n>0 ? x : 1/x;          // if n is neg, b is 1/b    |
        n = n>0 ? n : -1*n;         // if n is neg, n is -n     |
                                    // we need -n in range -----

        if(n==0) return 1;                          // if n is 0
                                                    // return 1
        if(n==2) return x*x;                        // if n is 2
                                                    // return x*x
        if(n%2==0) return myPow( myPow(x, n/2), 2); // if n is even
                                                    // return (x^n/2)^2
        else return x*myPow( myPow(x, n/2), 2);     // if n is odd
                                                    // return x*(x^n/2)^2
    }
};