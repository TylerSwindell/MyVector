#include "./Vector.cpp"
#include "./libs/UnitTest/UnitTest.cpp"
#include "../tutorials/friends/Rec.cpp"

int main() {
    UnitTest ut;

    bool testInts = false;
    bool testRec = false;

    if (testRec) {
        Vector<Rec> v;

        Rec r(1,1);
        v.push(r);
        // v.print(true);

        r = Rec(10,10);
        v.push(r);
        // v.print(true);

        r = Rec(21,7);
        v.push(r);
        // v.print(true);

        r = Rec(55,20);
        v.push(r);
        // v.print(true);

        r = Rec(4,35);
        v.push(r);
        v.print(true);

    }

    if (testInts) {
        Vector<int> v;

        int testInt = v.size();
        int expectedInt = 0;
        ut.testComponent(testInt, 0); 

        v.push(5); 
        testInt = v.get(v.index());
        expectedInt = 5;
        ut.testComponent(testInt, expectedInt);

        v.push(10);
        testInt = v.get(v.index());
        expectedInt = 10;
        ut.testComponent(testInt, expectedInt);

        v.push(1);  // 3
        print(v.size(), true);
        v.push(25); // 4
        print(v.size(), true);
        v.push(8);  // 5
        print(v.size(), true);
        v.push(1);  // 6
        print(v.size(), true);
        v.push(25); // 7
        print(v.size(), true);
        v.push(8);  // 8
        print(v.size(), true);

        testInt = v.get(v.index());
        expectedInt = 8;
        ut.testComponent(testInt, expectedInt);

        v.pop();

        v.print();
    }

    return 0;
}