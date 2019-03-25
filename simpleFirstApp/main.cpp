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
    std::thread th(tempFunc,"Hello","world");
    th.join();
}
