#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <iomanip>

class Array
{
    private:

    public:
        Array();
        /* Array(unsigned int n); */
        Array(const Array& constrCopy);
        Array& operator=(const Array& constrCopy);
        ~Array();
};

std::ostream& operator<<(std::ostream &output, const Array& constrCopy);

#endif
