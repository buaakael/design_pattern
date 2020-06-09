#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include "player.h"
#include "foreignCenter.h"
using namespace std;

class Translator : public Player
{
public:
    Translator(string name)
    {
        wjzf = new ForeignCenter(name);
    }
    void Attack()
    {
        wjzf->JinGong();
    }
    void Defense()
    {
        wjzf->FangShou();
    }
private:
    ForeignCenter *wjzf;
};


#endif
