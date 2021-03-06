#include "src/artifacts/ArtifactClass.h"
#ifndef RPG_UNDEADARTIFACT_H
#define RPG_UNDEADARTIFACT_H
namespace SkeletonArtifact{
    ArtifactClass helmet = ArtifactClass("Шлем из черепа",Artifact::HELMET,0,0,15,0,20,0,140);
    ArtifactClass armor = ArtifactClass("Костяная броня",Artifact::ARMOR,0,0,10,0,60,0,180);
    ArtifactClass hands = ArtifactClass("Костяные наручи",Artifact::HANDS,0,0,30,0,10,0,120);
    ArtifactClass legs = ArtifactClass("Поножи из костей",Artifact::LEGS,0,0,15,0,20,0,120);
}

namespace VampireArtifact{
    ArtifactClass helmet = ArtifactClass("Маска гоблина",Artifact::HELMET,50,0,30,10,0,0,250);
    ArtifactClass armor = ArtifactClass("Броня гоблина",Artifact::ARMOR,200,120,0,70,30,30,450);
    ArtifactClass hands = ArtifactClass("Перчатки гоблина",Artifact::HANDS,100,80,10,35,10,25,300);
    ArtifactClass legs = ArtifactClass("Ботинки гоблина",Artifact::LEGS,0,60,0,25,10,0,180);
}

namespace MummyArtifact{
    ArtifactClass helmet = ArtifactClass("Шлем драугра",Artifact::HELMET,60,0,25,0,25,0,140);
    ArtifactClass armor = ArtifactClass("Латные доспехи драугра",Artifact::ARMOR,160,0,20,0,60,0,180);
    ArtifactClass hands = ArtifactClass("Латные наручи драугра",Artifact::HANDS,40,0,10,0,50,0,120);
    ArtifactClass legs = ArtifactClass("Латные поножи драугра",Artifact::LEGS,0,90,15,0,0,50,120);
}
#endif //RPG_UNDEADARTIFACT_H
