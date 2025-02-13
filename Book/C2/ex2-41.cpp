# include <iostream>

struct Sales_data
{
    std:: string bookNo;
    int sold_units;
    double price;
    double cost;
    double profit;
};

int main()
{
    Sales_data data1;
    data1.bookNo = "1a";
    data1.sold_units = 100;
    data1.price = 35;
    data1.cost = 15;
    data1.profit = data1.sold_units * (data1.price - data1.cost);
    std::cout << " The profit for Bookstroe: " << data1.bookNo << " is " << data1.profit << std::endl;
    return 0;
}