#include <bits/stdc++.h>
#include <cmath>
using namespace std ; 


class Point{
    public : 
        double x, y; 
        double distance (const Point &p); 
        Point milieu(const Point &p);
};
double Point::distance(const Point &p){
    return sqrt((x-p.x)*(x-p.x) + (y-p.y)*(y-p.y));
}

Point Point::milieu(const Point &p){
    Point m;
    m.x = (x+p.x)/2;
    m.y = (y+p.y)/2;
    return m;
}




int main()  {
    Point A,B,C; 
    double d ; 
    cout << "Enter the coordinates of A: " ;
    cin >> A.x >> A.y ;
    cout << "Enter the coordinates of B: " ;
    cin >> B.x >> B.y ;
    cout << "Enter the coordinates of C: " ;
    cin >> C.x >> C.y ;

    C = A.milieu(B);
    d = A.distance(B);
    cout << "Milieu de AB" << endl; 
    cout  << "Absicce vaut " << C.x << " et l'ordonnée vaut " << C.y << endl;
    cout << "Distance entre A et B vaut " << d << endl;

    return 0; 

}