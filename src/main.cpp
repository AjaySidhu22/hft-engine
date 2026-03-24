#include "Order.h"
#include <iostream>
int main()
{
    Order order1(1001, "RELIANCE", 250.50, 500, 'B');
    Order order2(1002, "TCS", 3500.00, 100, 'S');
    order1.display();
    order2.display();
    order1.setIsActive(false);
    std::cout << "Order1 Active: " << (order1.isOrderActive() ? "YES" : "NO") << std::endl;
}