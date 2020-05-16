#include <iostream>
#include "stock.h"

void Stock::acquire(const std::string &co, long n, double pr)
{
    company = co;
    if(n<0)
    {
        std::cout<<"Number of shares can's be negative; "<<company<<" shares set to 0.\n";
        shares = 0;
    }
    else
    {
        shares = 0;
    }
    share_val = pr;
    set_tot();
}

void Stock::buy(long num, double price)
{
    if(num<0)
    {
        std::cout<<"Number of shares purchased can't be nagative. "<<"Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    using std::cout;
    if(num<0)
    {
        std::cout<<"Number of shares sold can't be nagative. "<<"Transaction is aborted.\n";
    }
    else if(num>shares)
    {
        cout<<"You can't sell more than you have!"<<"Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show()
{
    std::cout<<"Company: "<<company<<" shares: "<<shares<<std::endl;
    std::cout<<" Share Price: $"<<share_val<<" Total Worth: $"<<total_val<<std::endl;
}