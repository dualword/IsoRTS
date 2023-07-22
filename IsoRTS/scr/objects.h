#ifndef OBJECTS_H
#define OBJECTS_H
#include <vector>
#include <string>
#include "globalfunctions.h"
#include "humanReadableNames.h"
#include "objectTemplates.h"
#include <SFML/Graphics.hpp>

class objects
{

public:
    objects(){
        objectId =0;
        objectType = objectTypes::cypress;
        location = { -1, -1 };
        typeOfResource = resourceTypes::resourceWood;
        resourceLeft = 0;
    }
    objects(objectTypes type, cords location, int objectId);

    void            destroyObject();
    void            drawObjectFootprint(objectTypes type, cords mouseWorld) const;
    void            drawObject(int i, int j);
    void            drawObjectSprite(objectTypes spriteNumber, int i, int j) const;
    void            substractResource();
    int             amountOfResourcesLeft() const;
    std::string     nameOfResource() const;
    sf::IntRect     getLastIntRect() const;

    int             getObjectId() const;
    cords           getLocation() const;
    std::string     getName() const;
    objectTypes     getType() const;
    resourceTypes   getTypeOfResource() const;

private:
    sf::IntRect   lastIntRect;
    int           objectId;
    objectTypes   objectType;
    cords         location;
    resourceTypes typeOfResource;
    int           resourceLeft;
    
   

};
extern std::vector<objects> listOfObjects;

#endif // OBJECTS_H