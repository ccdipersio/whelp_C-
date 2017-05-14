#include "inventory.h"

Item::Item(Item_Type in_item_type) {
    switch (in_item_type) {
        case POTION:
            item_type = POTION;
            item_effect = HP_UP;
            strength = 5;
            break;
        case EITHER:
            item_type = EITHER;
            item_effect = MP_UP;
            strength - 5;
            break;
        case SWORD:
            item_type = SWORD;
            item_effect = ATK_UP;
            strength = 3;
            break;
        case SHIELD:
            item_type = SHIELD;
            item_effect = DEF_UP;
            strength = 3;
            break;
    };
}
