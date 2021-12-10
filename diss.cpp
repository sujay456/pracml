#include<bits/stdc++.h>
using namespace std;

int main()
{
int size;
cin>>size;
int arr[size][2];
for(int i=0;i<size;i++)
{
cin>>arr[i][0]>>arr[i][1];
}
float matrix[size][size];
for(int i=0;i<size;i++)
{
for(int j=0;j<size;j++)
{

if(i==j)
matrix[i][j]=0;
else
matrix[i][j]= sqrt(pow(arr[i][0]-arr[j][0],2)+pow(arr[i][1]-arr[j][1],2));
}
}
cout<<"Through Euclidean distance"<<endl;
for(int i=0;i<size;i++)
{
for(int j=0;j<size;j++)
{
cout<<matrix[i][j]<<" ";
}
cout<<endl;
}
float matrix2[size][size];
for(int i=0;i<size;i++)
{
for(int j=0;j<size;j++)
{
if(i==j)
matrix2[i][j]=0;
else

matrix2[i][j]= abs(arr[i][0]-arr[j][0])+abs(arr[i][1]-arr[j][1]) ;
}
}
cout<<"Through Manhattan distance"<<endl;
for(int i=0;i<size;i++)
{
for(int j=0;j<size;j++)
{
cout<<matrix2[i][j]<<" ";
}
cout<<endl;
}
return 0;
}