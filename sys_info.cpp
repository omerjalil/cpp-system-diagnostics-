#include <iostream>
#include <string>
#include <thread>

void displayHeader() {
    std::cout << "========================================" << std::endl;
    std::cout << "  COMPUTER ENGINEERING SYSTEM DIAGNOSTIC " << std::endl;
    std::cout << "========================================" << std::endl;
}

void getHardwareSpecs() {
    std::cout << "[+] Architecture : " << (sizeof(void*) == 8 ? "64-bit System" : "32-bit System") << std::endl;
    std::cout << "[+] CPU Threads  : " << std::thread::hardware_concurrency() << " logical cores" << std::endl;
    std::cout << "[+] Pointer Size : " << sizeof(uintptr_t) * 8 << " bits" << std::endl;
    std::cout << "[+] Status       : All systems operational" << std::endl;
}

int main() {
    displayHeader();
    getHardwareSpecs();
    return 0;
}
