#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
    for (int i = 1; i < argc; i += 2)
    {
        string x = argv[i];
        int x_size= x.size() - 1;

        string y = argv[i+1];
        int y_size = y.size() - 1;

        int carry = 0;
        string sum = "";
        while (x_size >= 0 || carry == 1)
        {
            carry += ((x_size >= 0) ? x[x_size] - '0' : 0);
            carry += ((y_size >= 0) ? y[y_size] - '0' : 0);

            sum += char(carry % 2 + '0');

            carry /= 2;
            x_size--;
            y_size--;
        }

        reverse(sum.begin(), sum.end());
        cout << sum << endl;
    }

    return 0;
}
