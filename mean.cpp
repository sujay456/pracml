#include <bits/stdc++.h>
using namespace std;
 
double means(double a[],int n){
    double sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum/n;
}

double median(double a[],int n){
    double ans;
    if(n%2==0)
        return (a[n/2-1]+a[n/2])/2;
    else
        return a[n/2];
} double variance(double a[], int n)
{
    double mean = means(a,n);
    double sqDiff = 0;
    for (int i = 0; i < n; i++)
        sqDiff += (a[i] - mean) *
                  (a[i] - mean);
    return sqDiff / n;
}
 
double standardDeviation(double arr[],
                         int n)
{
    return sqrt(variance(arr, n));
}

int main()
{   int n;
    cout << "Enter no.of elements in set" <<endl;
    cin >> n;
    double arr[n];
    for(int i=0;i<n;i++){
        cin >>arr[i];
}
    sort(arr,arr+n);
    cout << "mean: " << means(arr,n)<< endl;
    cout << "median: " << median(arr,n)<< endl;
    cout << "Variance: "
         << variance(arr, n) << endl;
    cout << "Standard Deviation: "<< standardDeviation(arr, n) << endl;
    return 0;
}