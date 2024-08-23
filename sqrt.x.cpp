#include <cmath>

class Solution {
public:
    double mySqrt(double N, double tolerance = 0.0001) {
        if (N < 0) {
            throw std::invalid_argument("Cannot compute the square root of a negative number.");
        }
        if (N == 0) return 0;

        double guess = N / 2;
        double next_guess = (guess + N / guess) / 2;

        while (std::abs(guess - next_guess) > tolerance) {
            guess = next_guess;
            next_guess = (guess + N / guess) / 2;
        }

        return next_guess;
    }
};
