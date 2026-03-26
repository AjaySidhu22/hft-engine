// ### Part A - Header Gaurd
// Every header file needs a guard to prevent double incluction

#ifndef LIMITORDER_H
#define LIMITORDER_H
#include "Order.h"

class LimitOrder: public Order{
   private:
   double limitPrice;

   public:
   LimitOrder(int64_t id, std::string symbol, double price, int64_t qty, char side, double limitPrice);

   ~LimitOrder();

   double getLimitPrice();

   void  display() override;
   std::string getOrderType() const override;
    
};

#endif // This tells compiler: if this file was already included,