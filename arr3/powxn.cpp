class Solution {
public:
    double myPow(double b, long n) {// long n required because
                                    // we need -n in range <-----
        b = n>0 ? b : 1/b;          // if n is neg, b is 1/b    |
        n = n>0 ? n : -1*n;         // if n is neg, n is -n     |
                                    // we need -n in range -----
                                    
                                    // we have to find b^n

        double x = 1;               // set x = 1
        double pow = b;             // set pow = b
        while(n){                   // until n becomes 0
            if(n%2){                // for odd n
                x = x*pow;          // x = x*pow
            }                       // and anyways
            pow *= pow;             // pow *= pow
            n /= 2;                 // n /= 2 for iteration
        }
        return x;                   // finally return the answer
    }
};