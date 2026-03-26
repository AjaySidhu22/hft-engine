// ### Part A - Header Gaurd
// Every header file needs a guard to prevent double incluction

#ifndef ORDER_H
#define ORDER_H
#include <string>
#include <cstdint>
#include <chrono>

class Order
{
private:
    int64_t orderId;
    std::string stockSymbol;
    double price;
    int64_t quantity;
    char side;
    int64_t timestamp;
    bool isActive;

public:
    Order(int64_t id, std::string symbol, double price, int64_t qty, char side);
    
    virtual ~Order();
     

    int64_t getOrderId();

    virtual std::string getOrderType() const = 0;

    std::string getStockSymbol();

    double getPrice();

    int64_t getQuantity();

    char getSide();

    int64_t getTimestamp();

    bool isOrderActive();

    bool operator<(const Order& other) const;

    bool operator>(const Order& other) const;

    bool operator==(const Order& other) const;

    // Setter - declaration only
    void setIsActive(bool active);
     // Display - declaration only
    virtual void display();
};

#endif // This tells compiler: if this file was already included,