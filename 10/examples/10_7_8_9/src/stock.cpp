#include <iostream>
#include "stock.h"

Stock::Stock()
{
    std::cout<<"Default constructor called\n";
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}
Stock::Stock(const std::string &co, long n, double pr)
{
    company = co;
    if(n<0)
    {
        std::cout<<"Number of shares can's be negative; "<<company<<" shares set to 0.\n";
        shares = 0;
    }
    else
    {
        shares = n;
    }
    share_val = pr;
    set_tot();
}

Stock::~Stock()
{
    std::cout<<"Bye, "<<company<<std::endl;
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

void Stock::show() const
{
    using std::cout;
    using std::ios_base;
    ios_base::fmtflags orig = 
        cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    std::cout<<"Company: "<<company<<" shares: "<<shares<<std::endl;
    std::cout<<" Share Price: $"<<share_val;
    cout.precision(2);
    cout<<" Total Worth: $"<<total_val<<std::endl;
}

const Stock & Stock::topval(const Stock &s) const
{
    if(s.total_val>total_val)
    {
        return s;
    }
    else
    {
        return *this;
    }
    
}