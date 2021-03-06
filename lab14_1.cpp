#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double A[],int N,double B[]){
    double max = A[0] , min = A[0],sum = 0,powsum = 0,multiplysum =1,harmonicsum=0;
    for(int i = 0 ;i < N ;i++){
        if(A[i] > max) max = A[i];
        if(A[i] < min) min = A[i];
        sum += A[i];
        powsum += pow(A[i],2);
        multiplysum *= A[i];
        harmonicsum += 1/A[i];
    }
    B[0]=sum/N;
    B[1]=pow(((powsum/N)-(pow((sum/N),2))),0.5);
    B[2]=pow(multiplysum,1/double(N));
    B[3]=N/harmonicsum;
    B[4]=max;
    B[5]=min; 
}