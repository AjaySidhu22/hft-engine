#include "LimitOrder.h"
#include <iostream>

LimitOrder::LimitOrder(int64_t id, std::string symbol,
                       double price, int64_t qty,
                       char side, double limitPrice)
    : Order(id, symbol, price, qty, side),
      limitPrice(limitPrice)
{
}

double LimitOrder::getLimitPrice(){
    return limitPrice;
}

std::string LimitOrder::getOrderType() const
{
    return "LIMIT";
}

void LimitOrder::display()
{
    Order::display();
    std::cout << "Limit Price : " << limitPrice << std::endl;
    std::cout << "Order Type : LIMIT" << std::endl;
}

LimitOrder::~LimitOrder()
{
    std::cout << "LimitOrder destroyed" << std::endl;
}