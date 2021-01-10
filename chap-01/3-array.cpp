#include <iostream>
#include <vector>
int main(int argc, char** argv)
{
    using namespace std;
    if(argc<2)
    {
        cerr << "Expected argument for array size." << std::endl;
        return -1;
    }

    int length = stoi(argv[1]);
    if (length <= 0)
    {
        cerr << "Expected strictly positive value for array size." << std::endl;
        return -1;
    }

    vector<int> array;

    for (int i = 0; i<length; i++)
    {
        array.emplace_back(i+1);
    }
    for (int value : array)
    {
        std::cout << value << std::endl;
    }
    return 0;
}
