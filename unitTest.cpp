#include "./Vector.cpp"
#include "../UnitTest/UnitTest.cpp"

int main() {

    UnitTest ut;
    Vector v;

    int testInt = 50;
    ut.testComponent(testInt, 50); 

    testInt = v.size();
    ut.testComponent(testInt, 0); 

    v.push(5);
    testInt = v.get(v.index());
    ut.testComponent(testInt, 5);

    v.push(10);
    testInt = v.get(v.index());
    ut.testComponent(testInt, 1);

    v.push(1);
    v.push(25);
    v.push(8);
    v.push(1);
    v.push(25);
    v.push(8);

    testInt = v.get(v.index());
    ut.testComponent(testInt, 8);

    v.pop();

    v.print();

    return 0;
}