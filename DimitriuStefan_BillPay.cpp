#include <fstream>
#include <iostream>

using namespace std;

int S;
int k;
int V[100];
int read_data()
{
    ifstream f ("read");
    f>>S;
    f>>k;
    for(int i=1;i<=k;i++)
    {
        f>>V[i];
    }
}
int sort_data()
{
   int m;
   int i=1;
   while(i<=k)
   {
     int maximum = INT_MIN;
     for(int j=k;j>=1;j--)
     {
         if(V[j] > maximum)
         {
            maximum = V[j];
            m=j;
         }
     }
     for(int j=1;j;j++)
        {
        swap(V[j],[j-1]);
        }
     i++;
   }


}
int greedy()
{

}
int main()
{
read_data();
sort_data();
cout<<" utilizez "<<greedy()<<" bancnote ";
}
