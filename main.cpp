#include <iostream>

int main()
{
    int jumlahPerulangan;
    std::string nama = "Salfa Putri Zein";
    std::string nim = "STE202203071";

    std::cout << "Masukkan jumlah perulangan: ";
    std::cin >> jumlahPerulangan;

    for (int i = 1; i <= jumlahPerulangan; i++)
    {
        std::cout << "Nama: " << nama << std::endl;
        std::cout << "NIM: " << nim << std::endl << std::endl;
    }

    return 0;
}