#include "main.h"
#include <cctype>
#include <stack>
#include <queue>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

bool is_palindrome(const std::string& s)
{
    std::stack<char> s1;
    std::queue<char> q2;
    for (auto letter : s)
    {
        if (isalpha(letter))
        {
            s1.push(std::tolower(letter));
            q2.push(std::tolower(letter));
        }
    }

    while(!s1.empty())
    {
        if (s1.top() != q2.front()) 
        {
            return false;
        }
        s1.pop();
        q2.pop();
    }

    return true;
}

int main()
{
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };

    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for (const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s) << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}
