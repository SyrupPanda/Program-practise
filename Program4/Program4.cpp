#include <iostream>
using namespace std;

int main()
{
    typedef int health;

    enum weapons
    {
        SWORD = 1,
        DAGGER,
        MACE,
        TWIN_SWORD,
        SAMURAI,
        WIZARD_STAFF,
        FIRE_POTION,
        ICE_BLADE,
        SMALL_KNIFE
    };

    health Health = 13000;
    weapons Weapons;
    Weapons = SAMURAI;

    cout << "My current Health is:" << Health << endl;
    cout << "And the ID of my Weapon of choice is:" << Weapons << endl;

}
