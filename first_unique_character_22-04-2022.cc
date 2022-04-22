#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
    for (int i = 1; i < argc; i++)
    {
        unordered_map<char, int> characters_counter;
        string word = argv[i];

        for (int j = 0; j < word.length(); j++)
            if (characters_counter.find(word[j]) == characters_counter.end())
                if (count(word.begin(), word.end(), word[j]) == 1)
                    characters_counter[word[j]] = j;

        if (characters_counter.empty())
            cout << -1 << endl;
        else
            cout << min_element(characters_counter.begin(), characters_counter.end(),
                                [](const auto& l, const auto& r) {
                                    return l.second < r.second;
                                })->second << endl;
    }

    return 0;
}
