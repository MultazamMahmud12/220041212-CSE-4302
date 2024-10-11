#ifndef KELVIN_H
#define KELVIN_H


class kelvin
{
    public:
        kelvin();
        kelvin(float x);
        void assign ();
        void display();
        double operator- (float x) ;
        void operator= (double x);

    private:
        float kel ;
        float cel ;
};

#endif // KELVIN_H
