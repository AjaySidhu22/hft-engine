#include "Order.h"
#include "LimitOrder.h"
#include "MarketOrder.h"
#include <iostream>

int main()
{

    Order *orders[2];
    orders[0] = new LimitOrder(1001, "RELIANCE", 250.50, 500, 'B', 248.00);
    orders[1] = new MarketOrder(1002, "TCS", 100, 'S');

    for (int i = 0; i < 2; i++)
    {
        orders[i]->display();
        std::cout << "Type: " << orders[i]->getOrderType() << std::endl;
    }

    LimitOrder *lo1 = new LimitOrder(2001, "HDFC", 1500.00, 200, 'B', 1498.00);
    LimitOrder *lo2 = new LimitOrder(2002, "HDFC", 1800.00, 200, 'B', 1798.00);
    // Two different orders at same price
    LimitOrder *lo3 = new LimitOrder(3001, "HDFC", 1500.00, 300, 'B', 1498.00);
    if (*lo1 < *lo2)
    {
        std::cout << "Order 2001 has lower price" << std::endl;
    }
    if (*lo2 > *lo1)
    {
        std::cout << "Order 2002 has higher price" << std::endl;
    }
    if (*lo1 == *lo3)
    {
        std::cout << "Same price order detected" << std::endl;
    }

    delete lo1;
    delete lo2;
    delete lo3;

    delete orders[0];
    delete orders[1];
}