#include "iostream"
#include <vector>
#include <utility>
int main()
{
    std::vector<int> values { 4, 0 };
    std::vector<int> valuess(4, 0);
    int  array[] = { 0, 1, 2, 3, 4, 5 };
    std::vector<int> fromarray(array,array+6);
    std::vector<int> tab{0,1,2,3,4,5,6,7,8,9,10};
    int size =tab.size();
/*
for(int i = 0, j =size-1; i<j;i++,j--)
{
    std::swap(tab[i],tab[j]);
}

// Display the content of values.
for (auto it = tab.begin(); it != tab.end(); it+=2)
{
    it = tab.insert(it,*it);
}

for (const auto v : tab)
{
    std::cout << v << std::endl;
}

while(tab.size()>0)
{
    tab.pop_back();
    std::cout << tab.size() << std::endl;
}

tab.erase(tab.begin()+2, tab.begin()+7);
for (const auto v : tab)
{
    std::cout << v << std::endl;
}


auto it = tab.begin();

it = std::find(tab.begin(),tab.end(),9);

if (it != tab.end())
{
    tab.erase(it);
}
*/
tab.assign(5,2);
tab.assign({0,2,32,-4});
auto value = 0;
for (auto it = tab.begin(); it != tab.end(); ++it)
{
    if(*it==2){
        value = *it;
    }
    std::cout << value << std::endl;
}
//tab.clear();
/*
for (const auto v : tab)
{
    std::cout << v << std::endl;
}*/
    return 0;
}