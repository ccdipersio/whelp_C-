#ifndef INVENTORY_H_INCLUDED
#define INVENTORY_H_INCLUDED

enum Item_Type {POTION, EITHER, SWORD, SHIELD};
enum Item_Effect {HP_UP, MP_UP, HP_DOWN, MP_DOWN, ATK_UP, ATK_DOWN, DEF_UP, DEF_DOWN};

class Item {
    private:
        Item_Type item_type;
        Item_Effect item_effect;
        int strength;
    public:
        Item(Item_Type in_item_type);
};

#endif // INVENTORY_H_INCLUDED
