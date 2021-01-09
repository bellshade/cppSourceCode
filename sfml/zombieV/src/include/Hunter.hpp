#ifndef BOT_HPP_INCLUDED
#define BOT_HPP_INCLUDED

#include "HunterBase.hpp"

class Bot : public HunterBase, public WorldEntityPool<Bot>
{
public:
    Bot();
    Bot(float x, float y);

    void hit(WorldEntity* entity, GameWorld* gameWorld);
    void setTarget(WorldEntity* entity) {m_target = entity;}
    void update(GameWorld& world);

    static void initialize();

private:
    WorldEntity* m_target;
    size_t m_getTargetCount;

    void computeControls(GameWorld& world);
    void getTarget(GameWorld* world);
};

#endif // BOT_HPP_INCLUDED

#ifndef HUNTER_HPP_INCLUDED
#define HUNTER_HPP_INCLUDED

#include <map>

#include "HunterBase.hpp"
#include "System/LifeForm.hpp"
#include "System/WorldEntityPool.hpp"
#include "System/EventManager.hpp"
#include "System/Animation.hpp"

#include "Weapons/Weapons.hpp"
#include "LightEngine/LightEngine.hpp"

class Hunter : public HunterBase, public WorldEntityPool<Hunter>
{
public:
    Hunter();
    Hunter(float x, float y);

    void updateControls(const EventManager& em);
    void update(GameWorld& world);

    static void initialize();

protected:
    bool _releasedWeaponSwap;
    bool _clicking;
};

#endif // HUNTER_HPP_INCLUDED
