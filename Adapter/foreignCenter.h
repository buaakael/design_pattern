#ifndef FOREIGNCENTER_H
#define FOREIGNCENTER_H

#include <iostream>
#include <string>
using namespace std;

class ForeignCenter
{
public:
    ForeignCenter(string name) : m_name(name) { }
    void JinGong()
    {
        cout << "外籍中锋" << m_name << "进攻" << endl;
    }
    void FangShou()
    {
        cout << "外籍中锋" << m_name << "防守" << endl;
    }
private:
    string m_name;
};

#endif
