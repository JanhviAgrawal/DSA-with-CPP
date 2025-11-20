#include "RBI.cpp"
int main()
{
    // Creating objects of child classes
    SBI s1;
    ICICI i1;
    BOB b1;

    s1.setSBI();
    i1.setICICI();
    b1.setBOB();

    s1.getSBI();
    i1.getICICI();
    b1.getBOB();
}