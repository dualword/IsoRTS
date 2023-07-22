#ifndef HUMANREADABLENAMES_H
#define HUMANREADABLENAMES_H

enum class resourceTypes
{
    resourceWood,
    resourceFood,
    resourceStone,
    resourceGold,
    All,
    None
};

enum class objectTypes : uint32_t
{
    cactus,
    cypress,
    maple,
    pine,
    stone,
    gold,
    berry
};

enum class spriteTypes
{
    spriteTownCenter,
    spriteHouse,
    spriteVillager,
    spriteCancel,
    spriteMill,
    spriteLumberCamp,
    spriteBarracks,
    spriteSwordsman,
    spriteMiningCamp,
    spriteWall,
    spriteGate,
    spriteOpenGate,
    spriteCivilBuilding,
    spriteMilitairyBuilding,
    spriteGoBack,
    spriteAttackMove
};

enum class actionTypes
{
    actionBuildTownCenter,
    actionBuildHouse,
    actionUnitSelect,
    actionMakeVillager,
    actionCancelBuilding,
    actionCancelProduction,
    actionBuildMill,
    actionBuildLumberCamp,
    actionBuildBarracks,
    actionMakeSwordsman,
    actionBuildMiningCamp,
    actionBuildWall,
    actionMakeGate,
    actionOpenGate,
    actionCloseGate,
    actionShowCivilBuildings,
    actionShowMilitairyBuildings,
    actionShowBack,
    actionAttackMove,
    none
};

enum class stackOrderTypes
{
    stackActionMove,
    stackActionGather,
    stackActionBuild,
    stackActionAttack,
    none
};

enum class worldObject {
    actor,
    object,
    building,
    none
};



#endif HUMANREADABLENAMES_H