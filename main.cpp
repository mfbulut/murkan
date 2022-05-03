#include <iostream>

// Returns the largest number whose square is less than or equal to n
static int largestSquare(const int n) {
    int i = 0;
    while ((i + 1) * (i + 1) <= n) {
        ++i;
    }
    return i;
}

// Just a macro to output the results
#define Output(number, x, y) std::cout << "Number: " << number << "\nFirst Factor: " << x << "\nSecond Factor: " << y << "\n\n";

int main() {
    int number, a, b, c, d;

    // Test numbers
    for (int i = 0; i < 100000; i++)
    {
        number = i;
        a = b = largestSquare(number);
        c = number - a * a;

        if (a) {
            d = c / a;
            c -= d * a;
            b += d;

            while (c)
            {
                --a;
                c += b;
                d = c / a;
                c -= d * a;
                b += d;
            }
        }

        Output(number, a, b);
    }
}
