#include<bits/stdc++.h>

#include <math.h>
using namespace std;

int main()
{
    long double answer = 0.0,prevAnswer = 1.0;
    int n;
    int a,b;
    char op;
    cin>>n;

     std::cout << std::setprecision(0) << std::fixed;

    for(int i=0; i<n; i++)
    {

        cin>>a>>op>>b;


        switch(op)
        {
        case '+':
            answer=(a+b)-prevAnswer;
            prevAnswer=answer;
            break;
        case '-':
            answer=(a-b)*prevAnswer;
            prevAnswer=answer;
            break;
        case '*':
            answer=pow(a*b,2);
            prevAnswer=answer;
            break;
        case '/':
            if(a%2==0)
            {
                answer=a/2;
            }
            else
            {
                answer=(a+1)/2;

            }
            prevAnswer=answer;
            break;
        }

       std::cout << static_cast<long long>(answer) << std::endl;

    }


    return 0;
}
