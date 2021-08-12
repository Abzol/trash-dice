#pragma once
#include "AbstractDice.h"
#include <vector>

class DieCup{
    private:
        std::vector<AbstractDice*> m_dice;
    public:
        void addDie(AbstractDice* die);
        void shake();
        int getValue();
};
