#pragma once

#include<string>
#include<iostream>
#include <vector>
#include <utility>
#include <cstdlib>

#include "FoodItem.hpp"

class MenuSystem;

class Order
{
    protected:
        std::string customerName;
        int tableNumber;
        int itemNo;
        std::vector<std::pair<FoodItem, int>> items;
        std::string paymentMethod;
        int orderID;

        MenuSystem* _menu;
        
    public:
        Order();
        void getOrderDetails();
        void collectCustomerDetails();
        void setMenu(MenuSystem& menu);
        ~Order();
};