# include<iostream>
//# include<graphics.h>
# include<conio.h>
# include<math.h>
using namespace std;
int main()
    {
    int y,a[5],i,n,j;

    cout<<"\nenter the degree of equation ";
    cin>>n;
    cout<<"\nenter the coefficients ";
    for(i=0;i<n;i++)
        {
        cin>>a[i];
        }
    for (i=-10;i<=10;i++)
        {
        y=0;
        for(j=0;j<n;j++)
            {
            y+=a[j]*pow(i,j);
            int* n=&y;
            void drawpoly(int x, int* points);
            }
        cout<<"\n y = "<<y<<"  x = "<<i;

        }

    return 0;
    }
