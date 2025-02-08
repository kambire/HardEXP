#ifndef HARD_EXP_H
#define HARD_EXP_H

#include "ScriptMgr.h"

class HardEXP : public WorldScript
{
public:
    HardEXP() : WorldScript("HardEXP") {}

    void OnConfigLoad(bool reload) override;
    float GetXpRate() const;

private:
    float xpRate;
};

#endif