// this is the second file after the main.cpp
// Auther Ajay Sidhu
// Friday, 20/3/20026
#include <iostream>
#include <string>
#include<cstdint>

double calculateOrderValue(double price, int quantity)
{
    return (double)price * quantity;
}
int main()
{
    double orderPrice = 150.75;
    int orderQuantity = 500;
    std::string stockSymbol = "RELIANCE";
    char side = 'B';
    bool isActive = true;
    int exchangeCode = 65;

    std::cout << "Order Price    : " << orderPrice << std::endl;
    std::cout << "Order Quantity : " << orderQuantity << std::endl;
    std::cout << "Stock Symbol   : " << stockSymbol << std::endl;
    std::cout << "Side           : " << side << std::endl;
    std::cout << "Is Active      : " << (isActive ? "YES" : "NO") << std::endl;
    std::cout << "Exchange  Code : " << exchangeCode << std::endl;
    int64_t maxInt = 9223372036854775807; 
    std::cout << "Max Int        : " << maxInt << std::endl;
    maxInt = maxInt + 1; 
    std::cout << "Max Int        : " << maxInt << std::endl;
    if (orderQuantity < 500)
    {
        std::cout << "Small Order" << std::endl;
    }
    else if (orderQuantity >= 500 && orderQuantity <= 1000)
    {
        std::cout << "Medium Order" << std::endl;
    }
    else if (orderQuantity > 1000)
    {
        std::cout << "Large Order" << std::endl;
    }

    // usnig the swich case statement 

    switch (exchangeCode)
    {
        case 65:
            std::cout << "Exchange: NSE" << std::endl;
            break;
        
        case 66: 
            std::cout <<  "Exchange: BSE"
 << std::endl;
            break;
        
        default:
            std::cout << "Exchange: Unknown" << std::endl;
            break;
    }

    for (int i = 1; i <= 5; i++)
    {
        std::cout << "Order " << i << " received" << std::endl;
    }
    
    int countdown = 3;

    while(countdown--){
        std::cout << "Engine shutting down in " << countdown << " seconds" << std::endl;
        countdown--;
    }
    std::cout << "Engine stopped." << std::endl;

    double orderValue = calculateOrderValue(orderPrice, orderQuantity);
    std::cout << "Order Value   : " << orderValue << std::endl;
    return 0;
}