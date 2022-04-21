#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
    if (argc == 1)
        cout << "\"\"" << endl;

    if (argc == 2)
        cout << argv[1] << endl;

    sort(argv, argv + argc-1);

    string first = argv[1], last = argv[argc-1];
    int first_length = first.length(), last_length = last.length();
    int minimum_length = min(first_length, last_length);

    int i = 0;
    while (i < minimum_length && first[i] == last[i])
        i++;

    string longest_common_prefix = first.substr(0, i);
    if (longest_common_prefix.size() == 0)
        cout << "\"\"" << endl;
    else
        cout << "\"" << longest_common_prefix << "\"" << endl;

    return 0;
}
