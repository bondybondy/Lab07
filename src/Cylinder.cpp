# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"

double Cylinder :: SurfaceArea()
{
    double pa = M_PI;
    return (pa*radius*radius*2 + pa*height*radius*2);
}

double Cylinder :: Volume(){
    double pi = M_PI;
    return (pi*radius*radius*height);
}

double Cylinder :: Circumference(){
    double pi = M_PI;
    return (2*pi*radius);
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height ;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out<<fixed<<setprecision(3);
    out<<"Circumference: "<<cldr.Circumference()<<"\n";
    out<<"SurfaceArea: "<<cldr.SurfaceArea()<<"\n";
    out<<"Volume: "<<cldr.Volume()<<"\n";
    return out;
}

# endif
