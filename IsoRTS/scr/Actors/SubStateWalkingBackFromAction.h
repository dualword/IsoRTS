#pragma once
#include "stateBase.h"

class SubStateWalkingBackFromAction : public StateBase {
public:
    using StateBase::StateBase;
    bool doAction(Actor* actor) override;
};