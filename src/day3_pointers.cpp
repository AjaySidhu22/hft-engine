// This is the third file which is about pointers
// Author = Ajay Sidhu
// Date = 22/3/2026
#include <iostream>

int main()
{
    int orderQty = 100;
    double orderPrice = 250.50;

    int *qtyPtr = &orderQty;
    double *pricePtr = &orderPrice;

    std::cout << "Value of orderQty         :" << orderQty << std::endl;
    std::cout << "Address of orderQty       :" << &orderQty << std::endl;
    std::cout << "Value via qtyPtr          :" << *qtyPtr << std::endl;
    std::cout << "Address stored in qtyPtr  :" << qtyPtr << std::endl;
    std::cout << "Address stored in pricePtr:" << pricePtr << std::endl;

    // using pouinter to change the value of the orderQty it changes the value because it change the value at the addrss
    *qtyPtr = 200;
    std::cout << "Value of orderQty         :" << orderQty << std::endl;

    double &priceRef = orderPrice;
    std::cout << "value via priceRef        :" << priceRef << std::endl;
    priceRef = 300.75;
    std::cout << "value of the orderPrice   :" << orderPrice << std::endl; // the valuse of the order price is changed because priceRef is alias of the orderPrice and it refernces the same address

    int *heapOrder = new int;
    *heapOrder = 500;
    std::cout << "Quantity of the Order     :" << *heapOrder << std::endl;

    double *prices = new double[3];

    prices[0] = 100.5;
    prices[1] = 200.5;
    prices[2] = 300.5;
    for (double *ptr = prices; ptr < prices + 3; ptr++)
    {
        std::cout << *ptr << std::endl;
    }

    delete heapOrder;
    delete[] prices; //// Use delete[] because memory was allocated with new[] (array allocation).

    heapOrder = nullptr;
    prices = nullptr;
    if (heapOrder != nullptr)
    {
        std::cout << "Pointer is not null - unsafe!" << std::endl;
    }
    else
    {
        std::cout << "Pointer is null - safe!" << std::endl;
    }
    if (prices != nullptr)
    {
        std::cout << "Pointer is not null - unsafe!" << std::endl;
    }
    else
    {
        std::cout << "Pointer is null - safe!" << std::endl;
    }

    int *danglePtr = nullptr;
    {
        int tempOrder = 999;
        danglePtr = &tempOrder;
        std::cout << "Inside block  : " << *danglePtr << std::endl;
    }
    // tempOrder destroyed here - immediately nullify the pointer
    danglePtr = nullptr;

    // now safely check before using
    if (danglePtr != nullptr)
    {
        std::cout << "Value : " << *danglePtr << std::endl;
    }
    else
    {
        std::cout << "Pointer nullified - dangling pointer prevented!" << std::endl;
    }

    return 0;
}