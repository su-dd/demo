#ifndef FLYWEIGHTFACTORY_H
#define FLYWEIGHTFACTORY_H
#include "IceCream_halfFareImpl.h"
#include "Chips_freeImpl.h"
#include <map>
class FlyweightFactory
{
public:
    enum StrategyType
    {
        IceCream_halfFare,
        Chips_free
    };
public:
    ~FlyweightFactory()
    {
        qDeleteAll(m_oStrategyMap.values());
    }

    SaleStrategyInterface* getStrategy(StrategyType type)
    {
        m_oStrategyMap.
        if (!m_oStrategyMap.find(type))
        {
            switch (type)
            {
            case IceCream_halfFare:
                m_oStrategyMap.insert()
                m_oStrategyMap.insert(type, new IceCream_halfFareImpl());
                break;
            case Chips_free:
                m_oStrategyMap.insert(type, new Chips_freeImpl());
                break;
            default:
                break;
            }
        }
        return m_oStrategyMap[type];
    }

private:
    std::map<int, SaleStrategyInterface*> m_oStrategyMap;
};
#endif // FLYWEIGHTFACTORY_H
