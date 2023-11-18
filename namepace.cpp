#include<iostream>
    /*Namespace = Provide a solution for preventing name conflicts in large projects.
    Each entity needs a unique name. A namespace allows for identically named entities as long as the 
    name space are different.
    */
   using namespace std;
namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
    using namespace second;

   cout <<"'" << first::x <<", "<<second::x<< ", " << x <<"'";
     

    return 0;
}