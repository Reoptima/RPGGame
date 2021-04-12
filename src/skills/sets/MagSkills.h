#include "src/skills/SkillClass.h"
#ifndef RPG_MAGSKILLS_H
#define RPG_MAGSKILLS_H
namespace MagSkills{
    SkillClass waterJet = SkillClass("Вингардиум Левиосса", 1, 200, 60, SkillElement::NON_ELEMENT, false);
    SkillClass staffStrike = SkillClass("Удар посохом по лбу", 1, 100, 0, SkillElement::NON_ELEMENT, false);
    SkillClass flashlightLight = SkillClass("Авадакидабра", 1, 150, 50, SkillElement::NON_ELEMENT, true);
    SkillClass miniFireball = SkillClass("Огненный шар", 2, 450, 100, SkillElement::NON_ELEMENT, false);
}
#endif //RPG_MAGSKILLS_H
