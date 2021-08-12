#include "DieCup.h"

void DieCup::addDie(AbstractDice* die) {
    m_dice.push_back(die);
}

void DieCup::shake() {
    for (int i=0; i<m_dice.size(); ++i) {
        m_dice[i]->roll();
    }
}

int DieCup::getValue() {
    int total = 0;
    for (int i=0; i<m_dice.size(); ++i) {
        total += m_dice[i]->getValue();
    }
    return total;
}
