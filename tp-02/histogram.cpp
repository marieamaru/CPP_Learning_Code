#include <iostream>

class Histogram {
public:
    Histogram() // constructeur
        : _count { new unsigned[26] }
    { std::cout<< "this is the first constructor" << std::endl; }  
                              
    Histogram(const Histogram& histo)
        : _count { new unsigned[26] }

    { 
        for(int i=0; i<26; i++)
            _count[i] = histo._count[i];
        std::cout<< "this is the copy constructor" << std::endl;
    }
             
    ~Histogram() // destructeur
    {
        delete[] _count;
    }                      
  
    Histogram& operator=(const Histogram& other) // opérateur d'assignation par copie
    {
        if(this != &other)
        {
            _count = other._count;
        }
        return *this;
    } 
  
    void analyze(const std::string& str)  // analyse la string passée en paramètre
    {
        int i = 0, j;
        while (str[i] != '\0') {
            if (str[i] >= 'a' && str[i] <= 'z') {   
                j = str[i] - 'a';
                ++_count[j];
            }
        ++i;
        }
    }  

    void print() const  // affiche l'histogramme
  
    {
        for (int i = 0; i < 26; i++)
            std::cout<< char(i + 'a')<<" : "<< _count[i]<< std::endl;
    } 

    private:
        unsigned* _count;   // tableau contenant le nombre d'occurrences de chaque lettre entre 'a' et 'z'
    };

    int main(int argc, char const *argv[])
    {
        /*
        Histogram h{};
        h.analyze("babouin");
        h.print();
        */

        Histogram h1,h2;
        Histogram h3{Histogram{h1}};
        return 0;
    }