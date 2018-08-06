
namespace IQT2017
{
    enum class DamageType {Physical, Special, Buff, Debuff, Poison, Sleep, Paralyze, Heal, None} ;
    enum class Stat {Attack, SpAttack, Defense, SpDefense, Speed, None};

    class BattleMonster
    {
        protected:
            int hp;
            int maxHp;
            int attack; 
            int spAttack; 
            int defense;
            int spDefense;
            int speed;
 
            int sleepCounter;
            int paralyzeCounter;
            int poisonCounter; 
            int poisonDmg; 

            Move move1;
            Move move2;
            Move move3;
            Move move4;

        public:
            virtual int getHp() { return hp; }
            virtual int getAttack() { return attack; }
            virtual int getSpAttack() { return spAttack; }
            virtual int getDefense() { return defense; }
            virtual int getSpDefense() { return spDefense; }
            virtual int getSpeed() { return speed; } 
            virtual int getSleepCounter() {return sleepCounter; }
            virtual void setSleepCounter(int sleep) {sleepCounter = sleep; return;}
            virtual int getParalyzeCounter() {return paralyzeCounter; }
            virtual void setParalyzeCounter(int paralyze) {paralyzeCounter = paralyze; return;}
            virtual int getPoisonCounter() {return poisonCounter;}
            virtual void setPoisonCounter(int poison) {poisonCounter = poison; return;}
            virtual int getPoisonDmg() {return poisonDmg;}
			virtual void setPoisonDmg(int poison) { poisonDmg = poison; return; }
            virtual int BattleMonster::computeDamageReceived(int damagePts, enum class DamageType dmgType, enum class Stat buffStat)
            {
                int damage = 0;
        
                if(damagePts == 0)
                {
                    return 0;       //no changes
                }
        
                switch (dmgType)
                {
                    case (DamageType::Physical):
                        damage = damagePts * (1/defense);
                        break;
        
                    case(DamageType::Special):
                        damage = damagePts * (1/spDefense);
                        break;
        
                    case (DamageType::Sleep):
                        sleepCounter = damagePts;
                        break;
        
                    case (DamageType::Paralyze):
                        paralyzeCounter = damagePts;
                        break;
        
                    case (DamageType::Poison):
                        poisonCounter = 5;
                        poisonDmg = damagePts;
                        break;
        
                    case (DamageType::Buff):
                        switch (buffStat)
                        {
                            case (Stat::Attack):
                                attack += damagePts;
                                break;
                            case (Stat::Defense):
                                defense += damagePts;
                                break;
                            case (Stat::SpAttack):
                                spAttack += damagePts;
                                break;
                            case (Stat::SpDefense):
                                spDefense += damagePts;
                                break;
                            case (Stat::Speed):
                                speed += damagePts;
                                break;
                        }
                        break;
        
                    case (DamageType::Debuff):
                        switch (buffStat)
                        {
                            case (Stat::Attack):
                                attack -= damagePts;
                                break;
                            case (Stat::Defense):
                                defense -= damagePts;
                                break;
                            case (Stat::SpAttack):
                                spAttack -= damagePts;
                                break;
                            case (Stat::SpDefense):
                                spDefense -= damagePts;
                                break;
                            case (Stat::Speed):
                                speed -= damagePts;
                                break;
                        }
                        break;
                    case (DamageType::Heal):
                        damage = damagePts;
                        break;
        
                    case (DamageType::None):
                    default:
        
                } 
                
        
                if(dmgType == DamageType::Heal)
                {
                    if((hp + damage) > maxHp)
                         hp = maxHp;
                    else 
                        hp += damage;
                }
        
                else
                     hp -= damage;
                return damage;
            }
	};

	class Move
	{
	protected:
		int pp;
		int power;
		int accuracy;

	public:
		virtual int PerformAction(BattleMonster& target) {};
	};

    

}
