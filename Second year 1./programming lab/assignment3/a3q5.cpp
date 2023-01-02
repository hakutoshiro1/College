#include <iostream>  
using namespace std;  
class Plants  
{  
public:  
Plants(){  
	cout<< "This is a producer\n";  
}
};  
class Herbivores: public Plants 
{  
public:  
Herbivores()  {  
	cout<< "This is a primary consumer\n";  
}
};  
class Carnivore: public Herbivores
{  
public:  
Carnivore()  
{  
	cout<< "This is a secondary consumer\n";  
}  
};  
class Secondary_Carnivore: public Carnivore  
{  
public:  
Secondary_Carnivore()  
{  
	cout<< "This is a tertiary consumer\n";  
}  
};  
int main() {  
    Secondary_Carnivore s;  
    return 0;  
}
