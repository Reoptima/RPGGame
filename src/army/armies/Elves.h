#include "src/army/ArmyClass.h"
#include "src/skills/SkillClass.h"

#ifndef RPG_ELVES_H
#define RPG_ELVES_H
namespace Elves{
    ArmyClass warElves = ArmyClass("Эльфы", 30 ,15 ,20,15,SkillElement::NON_ELEMENT,SkillElement::LIGHT, 20);
    ArmyClass archerElves = ArmyClass("Орки", 30 ,10 ,20,15,SkillElement::NON_ELEMENT,SkillElement::DARK, 20);
    ArmyClass magElves = ArmyClass("Суккубы", 30 ,8 ,35,15,SkillElement::NON_ELEMENT,SkillElement::FIRE, 20);
    ArmyClass assassinElves = ArmyClass("Дворфы", 30 ,22 ,35,15,SkillElement::NON_ELEMENT,SkillElement::FIRE, 20);
}

#endif //RPG_ELVES_H
