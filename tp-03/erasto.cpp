#include <vector>
#include <iostream>

int main()
{
    std::vector<unsigned long> tab (0, 99998);

    for (auto i = 2; i<100000; i++)
    {
        tab.emplace_back(i);
        std::cout << "v" << std::endl;
    }
    return 0;
}
