#include <iostream>
#include <string>
#include "translator.h"
using namespace std;

int main()
{
    Player *b = new Forwards("巴蒂尔");
    b->Attack();

    Player *m = new Guards("麦克格雷迪");
    m->Attack();

    Player *ym = new Translator("姚明");
    ym->Attack();
    ym->Defense();
}
