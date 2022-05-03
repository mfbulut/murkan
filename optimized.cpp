#include <iostream>

#define Output(number, x, y) std::cout << "Number: " << number << "\nFirst Factor: " << x << "\nSecond Factor: " << y << "\n\n";

int main() {
    int a, b, c, d;
    a = b = c = d = 0;

    for (int number = 0; number < 100000; number++)
    {
        while ((a + 1) * (a + 1) <= number) {
            ++a;
        }

        b = a;
        c = number - a * a;

        if (a) {
            d = c / a;
            b += d;
            c -= d * a;

            while (c)
            {
                --a;
                c += b;
                d = c / a;
                b += d;
                c -= d * a;
            }
        }

        Output(number, a, b);
    }
}