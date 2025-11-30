#ifndef WHEEL_H
#define WHEEL_H

#include <string>


class Wheel
{
private:
    int size;
    std::string type;
public:
    Wheel();
    Wheel(int size,std::string type);
    int getSize() const;
    void setSize(int newSize);
    std::string getType() const;
    void setType(const std::string &newType);
};

#endif // WHEEL_H
