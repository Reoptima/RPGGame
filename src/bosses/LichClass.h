#include "src/hero/HeroClass.h"
#include "src/artifacts/sets/WarriorArtifact.h"
#include "src/skills/sets/PharaohSkills.h"
#include "src/army/armies/Elves.h"

#ifndef RPG_LICHCLASS_H
#define RPG_LICHCLASS_H
class LichClass : public HeroClass {
public:

    explicit LichClass()
    {
        this->GradeName = "Босс";
        this->HeroName = "Демон";
        this->HP = 1500;
        this->maxHP = 900;
        this->mana = 1400;
        this->damage = 50;
        this->defense = 30;
        this->dead = false;
        this->setArtifactHelmet(WarriorArtifact::helmet);
        this->setArtifactArmor(WarriorArtifact::armor);
        this->setArtifactHands(WarriorArtifact::hands);
        this->setArtifactLegs(WarriorArtifact::legs);
        this->allSkillsGrade={
                PharaohSkills::strongBlow,
                PharaohSkills::torsionalImpact,
                PharaohSkills::lightStrike,
                PharaohSkills::heavenStrike
        };
        this->armies={Elves::warElves};
    }
};
HeroClass Lich = LichClass();
#endif //RPG_LICHCLASS_H
