#ifndef HARD_EXP_H
#define HARD_EXP_H

#include "ScriptMgr.h"

class HardEXP : public WorldScript
{
public:
    HardEXP();
    void OnConfigLoad(bool reload);
    float GetXpRate() const;

private:
    float xpRate;
};

extern HardEXP* sHardEXP;

// Add this line
void AddHardEXPScripts();

#endif