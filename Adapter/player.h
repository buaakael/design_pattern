#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
using namespace std;

class Player
{
public:
    Player() { }

    virtual void Attack() = 0;
    virtual void Defense() = 0;
protected:
    string m_name;
};

class Forwards : public Player
{
public:
    Forwards(string name) : m_name(name) { }
    void Attack()
    {
        cout << "前锋" << m_name << "进攻" << endl;
    }
    void Defense()
    {
        cout << "前锋" << m_name << "防守" << endl;
    }
private:
    string m_name;
};

class Center : public Player
{
public:
    Center(string name) : m_name(name) { }
    void Attack()
    {
        cout << "中锋" << m_name << "进攻" << endl;
    }
    void Defense()
    {
        cout << "中锋" << m_name << "防守" << endl;
    }
private:
    string m_name;
};

class Guards : public Player
{
public:
    Guards(string name) : m_name(name) { }
    void Attack()
    {
        cout << "后卫" << m_name << "进攻" << endl;
    }
    void Defense()
    {
        cout << "后卫" << m_name << "防守" << endl;
    }
private:
    string m_name;
};




#endif
