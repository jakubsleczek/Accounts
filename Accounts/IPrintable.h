#ifndef _IPRINTABLE_H_
#define _IPRINTABLE_H_

#include <iostream>

class I_Printable{
friend std::ostream &operator<<(std::ostream &os, I_Printable &obj);
public:
    virtual void print(std::ostream &os) const =0;
    virtual ~I_Printable() = default;
};



#endif // _IPRINTABLE_H_
