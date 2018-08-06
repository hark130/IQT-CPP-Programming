#include "battlemonster.h"

namespace IQT2017
{
    class Move 
    {
    protected:
        int pp;
        int power; 
        int accuracy; 
        
    public:
        virtual int PerformAction(BattleMonster& target) = 0;
    }
}