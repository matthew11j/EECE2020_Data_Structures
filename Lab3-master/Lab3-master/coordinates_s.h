#include <iostream>

using namespace std;

class coordinate{
    private:
        int x;
        int y;
    public:
        coordinate(){
            
        }
        coordinate(int v1, int v2){
            x = v1;
            y = v2;
        }
        int getX();
        int getY();
};

int coordinate::getX(){
    return x;
}
int coordinate::getY(){
    return y;
}