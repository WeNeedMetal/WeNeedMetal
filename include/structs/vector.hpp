#ifndef _HPP_WNM_VECTOR_
#define _HPP_WNM_VECTOR_

#include<cmath>
#include<array>

using namespace std;

namespace WeNeedMetal {

	template<typename T>
    struct vec2
    {
    
    public:
        T x, y;
        
        vec2(const T x = T(), const T y = T())
        : x(x), y(y) { }
        
        const double Length() const
        {
            return sqrt(LengthSq());
        }
        
        const T LengthSq() const
        {
            return x*x + y*y;
        
        }
        
        vec2<T> operator+(const vec2<T> &value) const
        {
            return vec2<T>(
                x + value.x,
                y + value.y);
        }
        
        vec2<T> operator-(const vec2<T> &value) const
        {
            return vec2<T>(
                x - value.x,
                y - value.y);
        }
        
        vec2<T> operator*(const T value) const
        {
            return vec2<T>(
                x * value,
                y * value);
        }

		template<typename U>
		operator vec2<U>() {
			return vec2<U>((U)x, (U)y);
		}
    };

	typedef vec2<double> Vector2;
	typedef vec2<int> Vector2i;
    


	template<typename T>
    struct vec3 {
    
    public:
        T x, y, z;
        
        vec3<T>(T x = T(), T y = T(), T z = T()) 
			: x(x), y(y), z(z) { }
        
        const double Dot(const vec3<T> &vec) const
        {
            return
                x * vec.x +
                y * vec.y +
                z * vec.z;
        }
        
        vec3<T> Cross(const vec3<T> &vec) const
        {
            return vec3<T>(
                y * vec.z - z * vec.y,
                z * vec.x - x * vec.z,
                x * vec.y - y * vec.x);
        }

		vec3<T> operator+(const vec3<T> &value) const
		{
			return vec3<T>(
				x + value.x,
				y + value.y,
				z + value.z);
		}		
		
		vec3<T> operator-(const vec3<T> &value) const
		{
			return vec3<T>(
				x - value.x,
				y - value.y,
				z - value.z);
		}

		vec3<T> operator*(const T &value) const
		{
			return vec3<T>(
				x * value,
				y * value,
				z * value);
		}

		template<typename U>
		operator vec3<U>() {
			return vec3<U>((U)x, (U)y, (U)z);
		}
    };

	typedef vec3<double> Vector3;
	typedef vec3<int> Vector3i;

}

#endif
