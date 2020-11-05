#include<iostream>
#include<fstream>
#include<iomanip>
class copy
{
    int a,b,c;
public:
    void read(void)
    {
        cout<<"Enter a:";
        cin>>a;
        cout<<"\nEnter b:";
        cin>>b;
        cout<<"\nEnter c:";
        cin>>c;
    }
};

main()
{
    copy obj[1];
    fstream file;
    file.open("STOCK.DAT",ios::in|ios::out);
}
