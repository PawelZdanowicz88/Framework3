
#include <iostream>
#include <string>
struct address
{
    std::string city;
    std::string street;
    int home_number = 0;
    int flat_number = 0;
    int index_number = 0;
};
void print_address(address& first_person)
{
    std::cout << first_person.city << std::endl;
    std::cout << first_person.street << std::endl;
    std::cout << first_person.home_number << std::endl;
    std::cout << first_person.flat_number << std::endl;
    std::cout << first_person.index_number << std::endl;

}
int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    address first_person;
    std::cout << "Введите название города: ";
    std::cin >> first_person.city;
    std::cout << "Введите название улицы: ";
    std::cin >> first_person.street;
    std::cout << "Введите номер дома: ";
    std::cin >> first_person.home_number;
    std::cout << "Введите номер квартиры: ";
    std::cin >> first_person.flat_number;
    std::cout << "Введите индекс: ";
    std::cin >> first_person.index_number;
    print_address (first_person);
    return 0;
}
