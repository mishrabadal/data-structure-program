#include <iostream>
#include <math.h>
using namespace std;
// T(n)= O(n)
void f1()
{
    int n = 16;
    for (int i = n / 2; i <= n; i++)
    {
        cout << "nce : " << i << endl;
    }
}

// T(n)= O(√n)
void f2()
{
    int n = 16, i = 1, s = 1;
    while (s <= n)
    {
        i = i + 1;
        s = s + i;
        cout << "nce  i: " << i << " s : " << s << endl;
    }
}

//DAA
// T(n)= O(n(logn))
void f3()
{
    int n = 4;
    int x = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j = j + i)
        {
            x = x + 1;
            cout << "nce : " << x << endl;
        }
    }
}
// T(n)= O(log(logn))
void f4()
{
    int n = 16;
    int x = 0;
    for (int i = n; i >= 2; i = sqrt(i))
    {

        x = x + 1;
        cout << "nce : " << x << endl;
    }
}


//T(n)=O((log2n)^2)
void f5()
{
    int n = 16;
    int x = 0;
    for (int i = 3; i <= 3; i = i*i*i)
    {

        for (int j = n; j >=1 ; j=j/2)
        {
            for (int k = 1; k <=n; k=k*4)
            {
                x=x+1;
                cout<<"nce : "<<x<<endl;
            }
            
        }
        
    }
}
int main()
{
git add .
git commit -m "4th semester ends"
git push origin coder-army
dd
    f5();
    return 0;
}