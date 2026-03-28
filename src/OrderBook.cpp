#include "OrderBook.h"
#include <iostream>

OrderBook::OrderBook(std::string symbol)
    : symbol(symbol), orderCount(0)
{
    std::cout << "OrderBook created for " << symbol << std::endl;
}

OrderBook::~OrderBook()
{
    std::cout << "orderBook destroyed for " << symbol << std::endl;
}

void OrderBook::addOrder(LimitOrder *order)
{
    if (order->getSide() == 'B')
    {
        bids[order->getPrice()].push_back(order);
    }
    else if (order->getSide() == 'S')
    {
        asks[order->getPrice()].push_back(order);
    }

    orderLookup[order->getOrderId()] = order;
    orderCount++;
}

bool OrderBook::cancelOrder(int64_t orderId)
{
    // Step 1: find in orderLookup
    auto it = orderLookup.find(orderId);
    if (it == orderLookup.end())
    {
        return false; // not found
    }
    // step 2: mark as inactive
    it->second->setIsActive(false);

    // Step 3: remove from lookup

    orderLookup.erase(it);
    orderCount--;
    return true;
}

double OrderBook::getBestBid()
{
    if (bids.empty())
    {
        return 0.0;
    }
    return bids.rbegin()->first; // highest key
}

double OrderBook::getBestAsk()
{
    if (asks.empty())
    {
        return 0.0;
    }
    return asks.begin()->first; // lowest key
}

int64_t OrderBook::getOrderCount()
{
    return orderCount;
}

void OrderBook::display()
{
    std::cout << "========== Order Book: " << symbol << " ==========" << std::endl;
    std::cout << "--- ASKS (SELL) ---" << std::endl;
    for (auto it = asks.rbegin(); it != asks.rend(); it++)
    {
        std::cout << "Price: " << it->first << " Orders: " << it->second.size() << std::endl;
    }
    std::cout << "--- BIDS (BUY) ---" << std::endl;
    for (auto it = bids.rbegin(); it != bids.rend(); it++)
    {
        std::cout << "Price: " << it->first << " Orders: " << it->second.size() << std::endl;
    }
    std::cout << "Total Orders : " << orderCount << std::endl;
    std::cout << "===========================================" << std::endl;
}
