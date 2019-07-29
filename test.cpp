#include "IDFromer.h"

int main(int argc, const char* argv[])
{
    
    IDFromer *fromer;
    try
    {
        fromer = new IDFromer;
    }catch(const char* msg)
    {
        std::cout<<msg<<std::endl;
        return -1;
    }

    std::uint32_t number;
    std::cin>>number;
    
    //两种方式  二选一
    std::cout<<(*fromer)[number]<<std::endl;
    std::cout<<fromer->get(number)<<std::endl;

    delete fromer;
    return 0;
}