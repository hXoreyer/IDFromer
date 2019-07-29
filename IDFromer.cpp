#include "IDFromer.h"

IDFromer::IDFromer()
{
    int flag = bFile();
    if(flag == 1)
        throw "file not found";
    else if(flag == 2)
        throw "file is empty";
    else
        LoadIDLoc();   
}

int IDFromer::bFile()
{
    std::ifstream in_file;
    in_file.open("./id");

    if(!in_file)
    {
        in_file.close();
        return 1;
    }
    char ch = in_file.get();
    if(in_file.eof())
    {
        in_file.close();
        return 2;
    }
    return 0;
}

void IDFromer::LoadIDLoc()
{
    std::ifstream in_file;
    in_file.open("./id");

    std::uint32_t id;
    std::string loc;

    while (!in_file.eof())
    {
        in_file>>id;
        in_file>>loc;
        data[id] = loc;
    }

    in_file.close();
}

std::string IDFromer::get(std::uint32_t number)
{
    if(number < size_s || number > size_b)
        return "number erro";
    if(data.find(number) == data.end())
        return "not found";
    return data[number];
}

std::string IDFromer::operator[] (std::uint32_t number)
{
    return get(number);
}
