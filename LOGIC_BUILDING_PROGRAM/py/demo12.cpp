#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int count = 1;
    int middle=5;
int s=middle-1;
int stop=5;
int stop2=1;
    for (int i = 1; i < n; i++)
    {
 if(i<=5){
for (int p = 1; p <= i-1; p++)
{
    cout<<" ";
}
 }
else if(i>=5)
{
     
    for (int p =1; p <s; p++)
{
    cout<<" ";
   
}
 s--;
}
if(i<=4){

        for (int j = 1; j <= 1; j++)
        {
            cout << i<<"";
            
        }

}
if(i>5)
{
     for (int j = 1; j <= 1; j++)
        {
            cout << i<<"";
            
        }
}
if(i==5)
{
    cout<<i;
}




        int space;
      
        if(i<=4)
        {
        for (space = 1; space <= stop; space++)
        {

            cout << " ";
           // cout<<"\nvalue : "<<stop;
        }
        stop = stop-2;
        }

        else if(i>6)
        {
                  for (space = 1; space <= stop2; space++)
        {

            cout <<" ";
            
        }
        stop2=stop2+2;
        }


        //next number 
        for (int j = 1; j <= 1; j++)
        {
           
            
             if(i==5)
            {
               
               continue;
            }
            cout << i<<"";
            count++;
        }
        cout << endl;
    }

    return 0;
}