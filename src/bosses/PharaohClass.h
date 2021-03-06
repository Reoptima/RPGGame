#include "src/hero/HeroClass.h"
#include "src/artifacts/sets/WarriorArtifact.h"
#include "src/skills/sets/PharaohSkills.h"
#include "src/army/armies/Elves.h"

#ifndef RPG_PHARAOHCLASS_H
#define RPG_PHARAOHCLASS_H
class PharaohClass : public HeroClass {
public:

    explicit PharaohClass()
    {
        this->GradeName = "Босс";
        this->HeroName = "Локи";
        this->HP = 900;
        this->maxHP = 900;
        this->mana = 700;
        this->damage = 70;
        this->defense = 25;
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
HeroClass Pharaoh = PharaohClass();

#endif //RPG_PHARAOHCLASS_H
