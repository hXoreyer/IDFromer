#ifndef WHERE_H
#define WHERE_H

#include <iostream>
#include <fstream>
#include <unordered_map>
#include <string>

class IDFromer
{
public:
    IDFromer();
    ~IDFromer(){};
public:
    void LoadIDLoc();
    int bFile();
    std::string operator[] (std::uint32_t number);
    std::string get(std::uint32_t number);
private:
    std::unordered_map<std::uint32_t, std::string> data;
    const std::size_t size_b = 820000;
    const std::size_t size_s = 110000;
};


#endif //WHERE_H