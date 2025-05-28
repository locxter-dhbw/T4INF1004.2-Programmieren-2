#ifndef OBJECT_H
#define OBJECT_H
#include "Material.hpp"

class Object {
private:
    int distance = 0;
    Material material;
public:
    // Constructors
    Object(Material material);

    Object(int distance, Material material);

    // Getter/setter
    int getDistance();

    void setDistance(int distance);

    Material getMaterial();
};

#endif //OBJECT_H
