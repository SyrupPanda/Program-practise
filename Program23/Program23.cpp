#include <iostream>

void invOut(std::string inv[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << inv[i] << std::endl;
    }
}

void replace(std::string inv[], int position, std::string pickup)
{
    inv[position] = pickup;
}

void pickupItem(std::string pickup, std::string inventory[], int size)
{
    bool option = true;
    char choice;

    while (option)
    {
        std::cout << "You have picked up a '" << pickup << "' !" << std::endl << "Replace the '" << inventory[3] << "' with the '" << pickup << "' [Y/N]" << std::endl;
        std::cin >> choice;
        if (choice == 'Y' || choice == 'y')
        {
            replace(inventory, 3, pickup);
            invOut(inventory, size);
            option = false;
        }
        if (choice == 'N' || choice == 'n')
        {
            std::cout << "Leaving '" << pickup << "' behind!" << std::endl;
            invOut(inventory, size);
            option = false;
        }

    }
}

int main()
{
    const int MAX_ITEMS = 4;
    int numItems = 0;
    std::string inventory[MAX_ITEMS];
    inventory[numItems++] = "sword";
    inventory[numItems++] = "battle axe";
    inventory[numItems++] = "healing potion";
    inventory[numItems++] = "dagger";

    std::string pickup = "wizard staff";

    invOut(inventory, MAX_ITEMS);

    pickupItem(pickup, inventory, MAX_ITEMS);
    
    
}

