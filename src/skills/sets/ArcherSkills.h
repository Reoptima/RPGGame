#include "src/skills/SkillClass.h"
#ifndef RPG_ARCHERSKILLS_H
#define RPG_ARCHERSKILLS_H
namespace ArcherSkills{
    SkillClass sharpArrow = SkillClass("Огненная стрела", 1, 150, 10, SkillElement::FIRE, false);
    SkillClass daggerStrike = SkillClass("Ядовитая стрела", 1, 100, 10, SkillElement::SPOILAGE, false);
    SkillClass lightArrow = SkillClass("Залп стрел", 1, 250, 80, SkillElement::NON_ELEMENT, true);

}

#endif //RPG_ARCHERSKILLS_H
