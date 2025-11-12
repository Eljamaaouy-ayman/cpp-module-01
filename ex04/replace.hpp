#ifndef REPLACE_H
#define REPLACE_H

#include <iostream>
#include <fstream>

class Replace
{
    private:
        std::string filename;
        std::string s1;
        std::string s2;

    public:
        Replace(std::string filename, std::string s1, std::string s2);
        void copy_file(void);
        ~Replace();
};

#endif