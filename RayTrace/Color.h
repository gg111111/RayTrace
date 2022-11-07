#pragma one
#ifndef COLOR_H
#define COLOR_H

#include"vec3.h"
#include<iostream>

inline void write_color(std::ostream& out, color pixel_color) 
{
	//д��ÿ����ɫ����ת�����ֵ[0,255]
	out << static_cast<int>(255.999 * pixel_color.x()) << ' '
		<< static_cast<int>(255.999 * pixel_color.y()) << ' '
		<< static_cast<int>(255.999 * pixel_color.z()) << '\n';
}

#endif // !COLOR_H

