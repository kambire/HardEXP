#include "HardEXP.h"
#include "Config.h"
#include "Player.h"
#include "World.h"

HardEXP::HardEXP() : WorldScript("HardEXP") {}

void HardEXP::OnConfigLoad(bool reload)
{
    (void)reload; // Parámetro no usado
    xpRate = sConfigMgr->GetOption<float>("hardEXP.XpRate", 0.1f);
}

float HardEXP::GetXpRate() const
{
    return xpRate;
}

HardEXP* sHardEXP = new HardEXP();

class HardEXPPlayer : public PlayerScript
{
public:
    HardEXPPlayer() : PlayerScript("HardEXPPlayer") {}

    void OnGiveXP(Player* player, uint32& amount, Unit* victim, uint8 xpSource) override
    {
        // Marcamos los parámetros no usados para evitar advertencias
        (void)player;
        (void)victim;
        (void)xpSource;

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