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

// Declaración de la instancia global
extern HardEXP* sHardEXP;

#endif