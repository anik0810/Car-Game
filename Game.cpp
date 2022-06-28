#include<iostream>
#include<conio.h>
using namespace std;

int dead=1;
class Car{
    private:
    void body(int y){
        for(int i=0;i<4;i++){
            for(int j=0;j<y+6;j++){
                if(j<y){
                    cout<<" ";
                }
                else{
                    cout<<"+";
                }
            }
            cout<<endl;
        }
    }
    public:
    void move(){
        int x=0;
        while(dead || getch()=='e'){
        switch (getch())
        {
        case 'd':
            x+=10;
            break;
        case 'a':
            x-=10;
            break;
        
        default:
            break;
        }
        system("cls");
        body(x);
    }
    }

};

int main(){
    Car car;
    car.move();
    return 0;
}