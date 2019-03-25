#include <iostream>
#include <string>
#include <thread>
#include <chrono>

int main()
{
    auto tempFunc = [](const std::string & first , const std::string &second)
    {
        std::cout<<first<<" "<<second<<std::endl;
    };

    auto temp10Second = []()
    {
        for(size_t i(0); i != 10; ++i)
        {
            std::cout<<"temp10Second : "<<i<<" second"<<std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
    };

    std::thread th(temp10Second);
    for(size_t i(0); i != 5; ++i)
    {
        std::cout<<"main : "<<i<<" second"<<std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

}
