#include <stdio.h>
#include "Die4.h"
#include "Die6.h"
#include "Die8.h"
#include "Die10.h"
#include "Die12.h"
#include "Die20.h"
#include "DieCup.h"
#include <time.h>

int main(){
    srand(time(NULL));
    AbstractDice* d4 = new Die4();
    AbstractDice* d6 = new Die6();
    AbstractDice* d8 = new Die8();
    AbstractDice* d10 = new Die10();
    AbstractDice* d12 = new Die12();
    AbstractDice* d20 = new Die20();

    DieCup* cup = new DieCup();
    cup->addDie(d4);
    cup->addDie(d6);
    cup->addDie(d8);
    cup->addDie(d10);
    cup->addDie(d12);
    cup->addDie(d20);
    cup->shake();

    printf("d4  is %d\n", d4->getValue());
    printf("d6  is %d\n", d6->getValue());
    printf("d8  is %d\n", d8->getValue());
    printf("d10 is %d\n", d10->getValue());
    printf("d12 is %d\n", d12->getValue());
    printf("d20 is %d\n", d20->getValue());
    printf("total: %d\n", cup->getValue());
}
