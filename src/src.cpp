#include <iostream>
#include <thread>

int main()
{
 bool demoFlag = true; 
 bool creditFlag = false;
 bool titleFlag = false;
 bool openingFlag = false;
    
 if(demoFlag == true){
    std::cout << "credit\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));// 3 秒待つ
    demoFlag = false;
    creditFlag = true;
 }
    
 if(creditFlag == true){
    std::cout << "title\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));// 3 秒待つ
    creditFlag = false;
    titleFlag = true;
 }
    
 if(titleFlag == true){
    std::cout << "opening\n";
    std::this_thread::sleep_for(std::chrono::seconds(5));// 5 秒待つ
    titleFlag = false;
    openingFlag = true;
 }
    
 if(openingFlag == true){
    std::cout << "demo\n";
    std::this_thread::sleep_for(std::chrono::seconds(5));// 5 秒待つ
    openingFlag = false;
    demoFlag = true;
 }
    
}

