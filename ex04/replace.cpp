#include "replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2)
{
    this->filename = filename;
    this->s1 = s1;
    this->s2 = s2;
}

void Replace::copy_file(void)
{
    std::ifstream source(filename);
    std::ofstream dest(filename + ".replace");

    if (!source || !dest)
    {
        std::cerr << "opening file failed!!\n";
        return ;
    }

void Replace::copy_file(void)
{
    std::string line;
    while (std::getline(source, line))
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        dest << line << std::endl;
    }
}
}