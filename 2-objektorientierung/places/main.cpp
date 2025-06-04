#include <functional>
#include <vector>

#include "Place.h"
#include "Sight.h"
#include "Toilet.h"

int main() {
    auto home = Place("Home", 0, 0);
    auto eifelTower = Sight("Eifel Tower", 5, 10, "All of Paris");
    auto theDevilsToilet = Toilet("The devils toilet", 23, 15, "Sulfur");
    std::vector<std::reference_wrapper<Place> > places;
    places.emplace_back(home);
    places.emplace_back(eifelTower);
    places.emplace_back(theDevilsToilet);
    for (auto place: places) {
        place.get().visit();
    }
    return 0;
}
