/*22070123132 Experiment inheritance of class priv, pub, protect*/
#include<iostream>
using namespace std;
class vehicle
{
    private:
    int piv_k = 5;
    protected:
    int prot_i = 10;
    public:
    int pub_j = 9;
    public:
    vehicle()
    {
        cout<<"This is vehicle class"<<endl;
    }
    protected:
    void disp()
    {
        cout<<"Protected func in class vehicle"<<endl;
    }
};
class car: private vehicle
{
    int i, j;
    public:
    car()
    {
        disp();
        cout<<"This is car class"<<endl;
        cout<<"Protected = "<<prot_i<<endl;
        cout<<"Public = "<<pub_j<<endl;
    }
};
main()
{
    car c;
    c.disp;
    return 0;
}
