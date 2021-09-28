#include <iostream>

class Racine
{
    public :
        int x;
};



class Racine2 : public Racine
{
    public :
        int y;
};

int main()
{
    Racine2 r;

    r.y = 10;
    r.x = 6;
}