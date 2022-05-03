#include <stdio.h> 

int main() {
    int a, b, c, d;
    a = b = c = d = 0;

    for (int i = 0; i < 100000; i++)
    {
        while ((a + 1) * (a + 1) <= i) {
            ++a;
        }

        b = a;
        c = i - a * a;

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

        printf("Number: %d\n", i);
        printf("First Factor: %d\n", a);
        printf("Second Factor: %d\n\n", b);
    }
}
