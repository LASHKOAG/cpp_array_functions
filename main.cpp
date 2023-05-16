#include <iostream>

using namespace std;

int f1(){
    cout << "Hello f1!" << endl << endl;
    return 0;
}


int f2(){
    cout << "Hello f2!" << endl << endl;
    return 0;
}


int f3(int a, int b){
    cout << "Hello f3!" << endl << endl;
    int c = a + b;
    cout << "c: " << c << endl << endl;
    return c*2;
}

int main()
{
    cout << "Hello World!" << endl;

    int (*arr[5])();

    arr[0]=f1;
    arr[1]=f2;

    int (*msv[5])(int k, int h);
    msv[0]=f3;

    cout << "test f1: " << (*arr[0])() << endl;
    cout << "test f2: " << (*arr[1])() << endl;

    cout << "test f3: " << (*msv[0])(5, 7) << endl;

    int result = (*msv[0])(5, 7);
    cout << "result: " << result << endl;

    return 0;
}


//Hello World!
//test f1: Hello f1!

//0
//test f2: Hello f2!

//0
//test f3: Hello f3!

//c: 12

//24
//Hello f3!

//c: 12

//result: 24
//Для закрытия данного окна нажмите <ВВОД>...
