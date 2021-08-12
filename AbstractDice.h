#pragma once
#include <stdlib.h>

class AbstractDice{
    private:
        int m_value;
        int m_sides;
    public:
        void roll();
        void setValue(int value);
        void setSides(int sides);
        int getValue();
};
