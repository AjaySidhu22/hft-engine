// This is the hft order engin 
// Author Ajay Sidhu
// This is the Day 1 of the project
// Date 16-03-2026

#include<iostream>
#include<string>

int main(){
    std::cout << "==========" << std::endl;
    std::cout << "HFT Order Machine Engine" << std::endl;
    std::cout << "==========" << std::endl;

    std::string engineName = "HFT-Engine-v1.0";
    int orderCount = 0;
    double lastPrice = 0.0;
    bool isRunning = true;

    std::cout << " Engine Name :" << engineName << std::endl;
    std::cout << " Order Count :" << orderCount << std::endl;
    std::cout << "  Last Price :" << lastPrice << std::endl;
    std::cout << "  isRunning :" << (isRunning?"YES":"NO") << std::endl;

    std::cout << "system is ready. Waiting for order.." << std::endl;

    return 0;
}