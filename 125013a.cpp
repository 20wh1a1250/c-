#include <iostream>
using namespace std;
int main()
{
    int num1,num2,result;
    try 
    {
        if(num2 == 0)
        {
            throw "Division by zero not possible";
            result = num1/num2;
        }
    }
    catch(int num2)
    {
        cout<<result<<endl;
    }
    return 0;
}
