#include "Order.h"
#include <iostream>

Order::Order(int64_t id, std::string symbol, double price, int64_t qty, char side)
    : orderId(id),
      stockSymbol(symbol),
      price(price),
      quantity(qty),
      side(side),
      timestamp(std::chrono::system_clock::now().time_since_epoch().count()),
      isActive(true)
      {

      }
Order::~Order()
{
    std::cout << "Order " << orderId << " destroyed" << std::endl;
}



int64_t Order::getOrderId()
{
    return orderId;
}
std::string Order::getStockSymbol()
{
    return stockSymbol;
}

double Order::getPrice()
{
    return price;
}

int64_t Order::getQuantity()
{
    return quantity;
}

char Order::getSide()
{
    return side;
}

int64_t Order::getTimestamp()
{
    return timestamp;
}

bool Order::isOrderActive()
{
    return isActive;
}

void Order::setIsActive(bool active)
{
    isActive = active;
}

void Order::display()
{
    std::cout << "Order    : " << orderId << std::endl;
    std::cout << "symbol   : " << stockSymbol << std::endl;
    std::cout << "Price    : " << price << std::endl;
    std::cout << "Quantity : " << quantity << std::endl;
    std::cout << "Side     : " << (side == 'B' ? "BUY" : "SELL") << std::endl;
    std::cout << "Active   : " << (isActive ? "YES" : "NO") << std::endl;
}

bool Order::operator<(const Order& other) const{
    return price < other.price;
}
bool Order::operator>(const Order& other) const{
    return price > other.price;
}
bool Order::operator==(const Order& other) const{
    return price == other.price;
}