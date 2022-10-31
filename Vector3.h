#pragma once
#ifndef Vector3_HPP
#define Vector3_HPP

namespace Fgmath
{
    class Vector3
    {
    private:
    public:
        /*!@brief x vector component*/
        float x;
        /*!@brief y vector component*/
        float y;
        /*!@brief z vector component*/
        float z;


        /**
         * \brief crete a 3D vector without components
         */
        Vector3();
        
        /**
         * \brief construct a 3D vector with x, y and z components
         * \param uX x
         * \param uY y
         * \param uZ z
         */
        Vector3(float uX, float uY, float uZ);
        
        /**
         * \brief destruct 3D vector
         */
        ~Vector3();
        /**
         * \brief copy constructors for 3D vector
         * \param 3D vector
        */
        Vector3(const Vector3& v);
        
        void operator+=(const Vector3& v);
        void operator-=(const Vector3& v);
        void operator*=(const float s);
        void operator/=(const float s);
        void operator%=(const Vector3& v);

        Vector3& operator=(const Vector3& v);
        Vector3 operator+(const Vector3& v)const;
        Vector3 operator-(const Vector3& v)const;
        Vector3 operator*(const float s)const;
        Vector3 operator/(const float s)const;
        Vector3 operator%(const Vector3 v)const;
     
        float operator*(const Vector3& v)const;

        void conjugate();
        void normalize();
        void zero();
        void absolute();
        void show();
        void negate();
     
        Vector3 cross(const Vector3 v)const;
        Vector3 rotateVectorAboutAngleAndAxis(float uAngle, Vector3& uAxis);
     
        float dot(const Vector3 v)const;
        float angle(const Vector3 v);
        float magnitude();
        float magnitudeSquare();
    };
}

#endif