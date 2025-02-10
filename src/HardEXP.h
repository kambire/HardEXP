#ifndef HARDEXP_H
#define HARDEXP_H

#include "ScriptMgr.h"

class HardEXP : public WorldScript
{
public:
    static HardEXP* Instance();
    HardEXP();

    void OnConfigLoad(bool reload);
    float GetXpRate() const;

private:
    float m_xpRate;
    static HardEXP* instance;
};

#endif