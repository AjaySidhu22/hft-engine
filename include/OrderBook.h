// ### Part A - Header Gaurd
// Every header file needs a guard to prevent double incluction

#ifndef ORDERBOOK_H
#define ORDERBOOK_H

#include "LimitOrder.h"
#include <map>
#include <vector>
#include <unordered_map>
#include <string>

class OrderBook
{
private:
    // bid sodi: buy orders - sorted decending by price
    // higher price = better bid
    std::map<double, std::vector<LimitOrder *>> bids;

    // ask side: sell orders - sorted ascending by price
    // lower price = better ask
    std::map<double, std::vector<LimitOrder *>> asks;

    // fast lookup: orderId → pointer to order
    // used for O(1) cancel
    std::unordered_map<int64_t, LimitOrder *> orderLookup;

    std::string symbol;
    int64_t orderCount;

public:
    // Constructor - takes stock symbol
    OrderBook(std::string symbol);

    // Destructor
    ~OrderBook();

    // Add order to book
    void addOrder(LimitOrder *order);

    // Cancel order by ID
    bool cancelOrder(int64_t orderId);

    // Get best bid price (highest buy)
    double getBestBid();

    // Get best ask price (lowest sell)
    double getBestAsk();

    // Get total orders in book
    int64_t getOrderCount();

    // Display the order book
    void display();
};

#endif // This tells compiler: if this file was already included,