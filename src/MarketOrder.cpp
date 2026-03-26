#include "MarketOrder.h"
#include <iostream>

MarketOrder::MarketOrder(int64_t id, std::string symbol,
                         int64_t qty, char side)
    : Order(id, symbol, 0.0, qty, side)
{
}

std::string MarketOrder::getOrderType() const
{
    return "MARKET";
}

void MarketOrder::display()
{
    Order::display();
    std::cout << "Order Type : MARKET" << std::endl;
    std::cout << "Execute at : BEST AVAILABLE PRICE" << std::endl;
}

MarketOrder::~MarketOrder()
{
    std::cout << "MarketOrder destroyed" << std::endl;
}