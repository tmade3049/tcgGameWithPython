#include<iostream>
#include<cmath>

using namespace std;

const float ZERO=0.0;

class ponto
{
private:
    float x;
    float y;
public:
    ponto(float a, float b)
    {
        x = a;
        y = b;
    }
    void mostra(void) const
    {
        cout << "X:" << x << " | Y:" << y << endl;
    }
    float distancia(const ponto hi) const
    {
        return float(sqrt((pow(double(hi.x - x),2.0) + pow(double(hi.y-y),2.0))));
    }
};
    int temp_main()
    {
        ponto ap(3.0, 4.0);
        ap.mostra();
        
        const ponto origem(ZERO, ZERO);
        origem.mostra();
        
        cout << "Distancia da origem: " << origem.distancia(ap) << endl;
       
        return 0;
    }
