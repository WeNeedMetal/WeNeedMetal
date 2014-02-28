#ifndef __HPP_WNM_VECTOR__
#define __HPP_WNM_VECTOR__

namespace wnm {
    
    struct Vector3 {
    public:
        float x, y, z;
        
        Vector3(float x, float y, float z) 
        : x(x), y(y), z(z) { }
        
        float Dot(Vector3 vec)
        {
            return
                x * vec.x +
                y * vec.y +
                z * vec.z;
        }
        
        Vector3 Cross(Vector3 vec)
        {
            return Vector3(
                y * vec.z - z * vec.y,
                z * vec.x - x * vec.z,
                x * vec.y - y * vec.x);
        }
    };
}

#endif
