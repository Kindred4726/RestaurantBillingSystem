#pragma once

#include<iostream>
#include<vector>
#include "FoodItem.hpp"
#include "Menus/MainMenu.hpp"
#include "Order.hpp"

class MenuSystem
{
    private:
        std::vector<FoodItem> itemList;
        MainMenu _mainMenu;
        Order _order;

    public:

        void showMainMenu();
        void showNewOrderMenu();
        void showAddItemToOrderMenu();
        void showRemoveItemFromOrderMenu();
        void showSettleOrderMenu();
        void showFoodMenu();
        void showAddFoodItemMenu();
        void showRemoveFoodItemMenu();
        void showOrderEditMenu();
        void showOrderListMenu();

        FoodItem getItemByName(const std::string& itemName);
        
};

