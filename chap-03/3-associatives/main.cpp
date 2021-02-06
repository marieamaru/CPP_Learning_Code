#include <set>
#include <unordered_set>
#include <map>
#include <iostream>
#include "keys.h"
int main()
{
    /*
    std::set<ComparableDog> dogs;
    ComparableDog medor { "medor", "labrador"};
    ComparableDog luna { "luna", "beagle"};
    ComparableDog medor_clone = medor;
    dogs.emplace(medor);
    dogs.emplace(luna);
    dogs.emplace(medor_clone);
    std::cout << dogs.size() << std::endl;
    

    std::unordered_set<HashableDog> dogs;
    HashableDog wifi {"wifi","bordercollie"};
    dogs.emplace(wifi);
    std::cout << dogs.size() << std::endl;
    */

    using Owner = std::pair<std::string, std::string>;
    std::map<ComparableDog, Owner> owners_by_dog;
    Owner jane {"Jane", "Odd"};
    ComparableDog medor { "medor", "labrador"};
    owners_by_dog.emplace(medor,jane);
    return 0;
}