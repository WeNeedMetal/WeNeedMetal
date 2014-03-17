#ifndef _HPP_WNM_VECTOR_
#define _HPP_WNM_VECTOR_

#include<cmath>

using namespace std;

namespace WeNeedMetal {
    
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

	struct Vector3i
	{
	public:
		int x, y, z;
		Vector3i(int x = 0, int y = 0, int z = 0)
			: x(x), y(y), z(z) { }

	};
}

#endif
