#include "AbstractDice.h"

void AbstractDice::roll() {
    m_value = std::rand() % m_sides;
}

void AbstractDice::setValue(int value) {
    m_value = value;
}

void AbstractDice::setSides(int sides) {
    m_sides = sides;
}

int AbstractDice::getValue() {
    return m_value;
}
