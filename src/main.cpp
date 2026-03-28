// #include "Order.h"
// #include "LimitOrder.h"
// #include "MarketOrder.h"
#include "OrderBook.h"
#include <iostream>

int main()
{

    OrderBook book("RELIANCE");
    LimitOrder *order[5];
    order[0] = new LimitOrder(1001, "RELIANCE", 250.00, 200, 'B', 249.00);
    order[1] = new LimitOrder(1002, "RELIANCE", 250.00, 300, 'B', 249.00);
    order[2] = new LimitOrder(1003, "RELIANCE", 248.00, 500, 'B', 247.00);
    order[3] = new LimitOrder(1004, "RELIANCE", 252.00, 100, 'S', 253.00);
    order[4] = new LimitOrder(1005, "RELIANCE", 255.00, 150, 'S', 256.00);

    for (int i = 0; i < 5; i++)
    {
        book.addOrder(order[i]);
    }

    book.display();

    std::cout << "Best bid: " << book.getBestBid() << std::endl;
    std::cout << "Best Ask: " << book.getBestAsk() << std::endl;

    if (book.cancelOrder(1002))
    {
        std::cout << "Cancelled order 1002 successfully" << std::endl;
    }else
    {
        std::cout << "Order 1002 not found!" << std::endl;
    }

    book.display();
    std::cout << "Total Orders: " << book.getOrderCount() << std::endl;

    for (int i = 0; i < 5; i++)
    {
        delete order[i];
    }
}