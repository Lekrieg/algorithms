#include "List.hpp"

int main()
{
    List listaTeste;

    listaTeste.createNode(3);
    listaTeste.insertStart(2);
    listaTeste.insertPosition(5, 1);
    listaTeste.insertStart(29);
    listaTeste.insertPosition(0, 1239123);

    listaTeste.display();

    std::cin.get();
    return 0;
}