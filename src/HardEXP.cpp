#include "HardEXP.h"
#include "Config.h"
#include "Player.h"
#include "World.h"

HardEXP::HardEXP() : WorldScript("HardEXP") {}

void HardEXP::OnConfigLoad(bool reload)
{
    (void)reload; // Suprime la advertencia del parámetro no usado
    xpRate = sConfigMgr->GetOption<float>("hardEXP.XpRate", 0.1f);
}

float HardEXP::GetXpRate() const
{
    return xpRate;
}

// Define la instancia global
HardEXP* sHardEXP = new HardEXP();

class HardEXPPlayer : public PlayerScript
{
public:
    HardEXPPlayer() : PlayerScript("HardEXPPlayer") {}

    // Función corregida con 4 parámetros (xpSource)
    void OnGiveXP(Player* player, uint32& amount, Unit* victim, uint8 xpSource) override
    {
        (void)xpSource; // Suprime la advertencia si no se usa
        if (sHardEXP->GetXpRate() > 0.0f)
        {
            amount = static_cast<uint32>(amount * sHardEXP->GetXpRate());
        }
    }
};

void AddSC_HardEXP()
{
    new HardEXPPlayer();
}