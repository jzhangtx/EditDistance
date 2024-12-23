// EditDistance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int GetMinOperations(std::string& s1, std::string& s2, size_t index1, size_t index2)
{
    if (index1 == s1.size())
    {
        return static_cast<int>(s2.size() - index2);
    }
    if (index2 == s2.size())
    {
        return static_cast<int>(s1.size() - index1);
    }

    int minOperations = INT_MAX;
    if (s1[index1] == s2[index2])
        return GetMinOperations(s1, s2, index1 + 1, index2 + 1);

    int delChar = GetMinOperations(s1, s2, index1 + 1, index2);
    int insChar = GetMinOperations(s1, s2, index1, index2 + 1);
    int repChar = GetMinOperations(s1, s2, index1 + 1, index2 + 1);
    minOperations = std::min(delChar, minOperations);
    minOperations = std::min(insChar, minOperations);
    minOperations = std::min(repChar, minOperations);

    return minOperations + 1;
}

int MinOperations(std::string& s1, std::string& s2)
{
    return GetMinOperations(s1, s2, 0, 0);
}

int main()
{
    while (true)
    {
        std::cout << "String 1: ";
        std::string s1;
        std::cin >> s1;
        if (s1 == "q" || s1 == "Q")
            break;

        std::cout << "String 2: ";
        std::string s2;
        std::cin >> s2;

        std::cout << "The levenshtein distance is: " << MinOperations(s1, s2) << std::endl;
    }
}
