#include "HardEXP.h"
#include "Config.h"
#include "Player.h"
#include "World.h"

void HardEXP::OnConfigLoad(bool reload)
{
    xpRate = sConfigMgr->GetOption<float>("hardEXP.XpRate", 0.1f);
}

float HardEXP::GetXpRate() const
{
    return xpRate;
}

class HardEXPPlayer : public PlayerScript
{
public:
    HardEXPPlayer() : PlayerScript("HardEXPPlayer") {}

    void OnGiveXP(Player* player, uint32& amount, Unit* victim) override
    {
        if (auto xpRate = sHardEXP->GetXpRate())
        {
            amount = static_cast<uint32>(amount * xpRate);
        }
    }
};

void AddSC_HardEXP()
{
    new HardEXPPlayer();
}

void AddHardEXPScripts()
{
    // Registra la clase principal del módulo (HardEXP)
    new HardEXP();

    // Registra los scripts adicionales (en este caso, HardEXPPlayer)
    AddSC_HardEXP();
}