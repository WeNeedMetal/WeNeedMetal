#ifndef __HPP_WNM_VECTOR__
#define __HPP_WNM_VECTOR__

#include<cmath>

using namespace std;

namespace wnm {
    
    struct Vector3 {
    
    public:
        double x, y, z;
        
        Vector3(double x = 0.0, double y = 0.0, double z = 0.0) 
        : x(x), y(y), z(z) { }
        
        const double Dot(const Vector3 &vec) const
        {
            return
                x * vec.x +
                y * vec.y +
                z * vec.z;
        }
        
        Vector3 Cross(const Vector3 &vec) const
        {
            return Vector3(
                y * vec.z - z * vec.y,
                z * vec.x - x * vec.z,
                x * vec.y - y * vec.x);
        }
    };

    struct Vector2
    {
    
    public:
        double x, y;
        
        Vector2(const double x = 0.0, const double y = 0.0)
        : x(x), y(y) { }
        
        const double Length() const
        {
            return sqrt(LengthSq());
        }
        
        const double LengthSq() const
        {
            return x*x + y*y;
        
        }
        
        Vector2 operator+(const Vector2 &value) const
        {
            return Vector2(
                x + value.x,
                y + value.y);
        }
        
        Vector2 operator-(const Vector2 &value) const
        {
            return Vector2(
                x - value.x,
                y - value.y);
        }
        
        Vector2 operator*(const double value) const
        {
            return Vector2(
                x * value,
                y * value);
        }
    };
}

#endif
