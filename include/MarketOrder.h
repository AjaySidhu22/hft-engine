// ### Part A - Header Gaurd
// Every header file needs a guard to prevent double incluction

#ifndef MARKETORDER_H
#define MARKETORDER_H
#include "Order.h"

class MarketOrder: public Order{

    public:
    MarketOrder(int64_t id, std::string symbol, int64_t qty, char side);

    ~MarketOrder();

    void display() override;

    std::string getOrderType() const override;
};

#endif // This tells compiler: if this file was already included,