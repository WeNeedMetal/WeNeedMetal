#ifndef _HPP_WNM_MATRIX_
#define _HPP_WNM_MATRIX_

#include <array>
#include <cmath>

#include "vector.hpp"

namespace WeNeedMetal {
    template <typename T>
    struct mat4
    {
	typedef array<T, 16> Value;
	private:
		Value value;
    public:
        mat4<T>(Value value)
            : value(value)
        { }

        mat4<T>(){
			value.fill(0);
			value[0] = 1;
			value[5] = 1;
			value[10] = 1;
			value[15] = 1;
		}

		void Set(int x, int y, T n) {
			value[x * 4 + y] = n;
		}

		template<int X, int Y>
		void Set(T n) {
			value[X + Y * 4] = n;
		}

		T Get(int x, int y) {
			return value[x * 4 + y];
		}

		T* Ptr() {
			return value.data();
		}

		mat4<T> operator+(mat4<T> right) {
			mat4<T> result;
			for(int i=0;i<16;i++) result.value[i] = value[i] + right.value[i];
			return result;
		}

		mat4<T> operator*(mat4<T> right) {
			mat4<T> result;
			for(int y=0;y<4;y++)
				for(int x =0;x<4;x++) {
					T n = 0;
					for(int w=0;w<4;w++)
						n += (Get(w, y) * right.Get(x, w));
					result.Set(x, y, n);
				}
			return result;
		}

        static mat4<T> FromTranslate(T x, T y, T z) {
			mat4<T> result;
			result.Set<0, 3>(x);
			result.Set<1, 3>(y);
			result.Set<2, 3>(z);
            return result;
        }

        static mat4<T> FromTranslate(vec3<T> vec) {
            return FromTranslate(vec.x, vec.y, vec.z);
        }

        static mat4<T> FromScale(T x, T y, T z) {
            mat4<T> result;
			result.Set<0, 0>(x);
			result.Set<1, 1>(y);
			result.Set<2, 2>(z);
            return result;
        }

        static mat4<T> FromScale(vec3<T> vec) {
            return FromScale(vec.x, vec.y, vec.z);
        }

        static mat4<T> FromRotateX(T r) {
            return mat4<T>({1, 		0,		0,		0,
                            0,	 	cos(r), -sin(r),0,
                            0,	 	sin(r),	cos(r),	0,
                            0,	 	0,		0,		1});
        }

        static mat4<T> FromRotateY(T r) {
            return mat4<T>({cos(r), 0,		sin(r),	0,
                            0,		0,		0,		0,
                            -sin(r),0,  	cos(r),	0,
                            0,		0,		0,		1});
        }

        static mat4<T> FromRotateZ(T r) {
            return mat4<T>({cos(r),	-sin(r),0,		0,
                            sin(r),	cos(r), 0,      0,
                            0,		0,  	1,  	0,
                            0,		0,		0,		1});
        }

    };
	
	typedef mat4<double> Matrix4;
}

#endif
