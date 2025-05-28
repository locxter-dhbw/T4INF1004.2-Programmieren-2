#include "Object.hpp"

Object::Object(Material material) : material(material) {
}

Object::Object(int distance, Material material) : Object(material) {
    setDistance(distance);
}

int Object::getDistance() {
    return distance;
}

void Object::setDistance(int distance) {
    if (distance < 0) distance = 0;
    this->distance = distance;
}

Material Object::getMaterial() {
    return material;
}
