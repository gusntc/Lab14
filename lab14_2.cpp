#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y); //กรอก
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}

void updateImage(bool image[][M],int s,int x,int y){ //เอาตัวแปรมาใส่
    for(int i=0 ;i<N ;i++){
        for(int j=0;j<M;j++){
            if(s-1 >= sqrt((pow(i-x,2))+(pow(j-y,2)))){
                image[i][j] = 1;
            }
        }
    }
    
}

void showImage(const bool image[][M]){
    for(int i=0;i<=71;i++){
        cout << "-"; //ขอบบน
    }
    for(int i=0;i<N ;i++){ //ข้างใน
        cout << endl;
        for(int j=0;j<71;j++){
            if(j == 0 or j == 70){
                cout << "|" << " ";
            }else{
                cout << " ";
            }
            if(image[i][j] == 1){
                cout << "*";
            }
        }
    }
    cout << endl; //ขอบล่าง
    for(int i=0;i<=71;i++){
        cout << "-";
    }
}
       