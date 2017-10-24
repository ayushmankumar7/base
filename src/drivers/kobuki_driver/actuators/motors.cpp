#include "motors.h"

Motors::Motors(KobukiManager *kobuki_manager)
{
    this->kobuki_manager = kobuki_manager;
}

Motors::~Motors()
{

}

float Motors::getV(const Ice::Current&)
{
    return 0.;
}

float Motors::getW(const Ice::Current&)
{
    return 0.;
}

float Motors::getL(const Ice::Current&)
{
    return 0.;
}

Ice::Int Motors::setV(Ice::Float v, const Ice::Current&)
{
    kobuki_manager->setV(v);
    return 0;
}

Ice::Int Motors::setW(Ice::Float _w, const Ice::Current&)
{
    kobuki_manager->setW(_w);
    return 0;
}

Ice::Int Motors::setL(Ice::Float l, const Ice::Current&)
{
    l = 0;
    return 0;
}
