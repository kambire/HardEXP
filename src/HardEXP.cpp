#include "HardEXP.h"
#include "Config.h"
#include "Player.h"
#include "WorldSession.h"

HardEXP* HardEXP::instance = nullptr;

HardEXP::HardEXP() : WorldScript("HardEXP")
{
    instance = this;
    m_xpRate = 0.1f;
}

HardEXP* HardEXP::Instance()
{
    return instance;
}

void HardEXP::OnConfigLoad(bool reload)
{
    (void)reload; 
    m_xpRate = sConfigMgr->GetOption<float>("hardEXP.XpRate", 0.1f);
}

float HardEXP::GetXpRate() const
{
    return m_xpRate;
}

class HardEXP_PlayerScript : public PlayerScript
{
public:
    HardEXP_PlayerScript() : PlayerScript("HardEXP_PlayerScript") {}

    void OnGiveXP(Player* player, uint32& amount, Unit* victim, uint8 xpSource) override
    {
        (void)player;
        (void)victim;
        (void)xpSource;

        if (HardEXP::Instance() && HardEXP::Instance()->GetXpRate() > 0.0f)
        {
            amount = static_cast<uint32>(amount * HardEXP::Instance()->GetXpRate());

            if (player && amount > 0)
            {
                player->GiveXP(amount, victim, xpSource);
            }
        }
    }
};

void AddSC_HardEXP()
{
    new HardEXP_PlayerScript();
}

void AddHardEXPScripts()
{
    new HardEXP();
    AddSC_HardEXP();
}