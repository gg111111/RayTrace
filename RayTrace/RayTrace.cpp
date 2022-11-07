// RayTrace.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#pragma one
#include <iostream>
#include <fstream>
#include<math.h>
#include"Color.h"
#include"Ray.h"

using namespace std;

const int Width = 1024;
const int Height = 1024;

const vec3 Eye(0,0,0);

//视口的中心点
const vec3 Viewport(0, 0, 1);

const vec3 Plane(0, 0, 1);

//视口高度为1
const int Height_Viewpoart = 1;

//视口宽和高的比
const double aspect_ratio = 16.0 / 9.0;

//图片的长和高
const float Picture_Width = 1.0;

const float Picture_Height = 1.0;

//判断是否在平板上
bool judgeOnPlane(ray getRay)
{
    return false;
}

color GetColor(ray t_Ray)
{
    if (judgeOnPlane(t_Ray))
    {
        return color(0, 0, 0);
    }
    else
    {

    }
}

int main()
{
    ofstream out;

    out.open("Hello.ppm", ios::out | ios::ate);                 //根据自己需要进行适当的选取

    out << "P3\n" << Width << ' ' << Height << "\n256\n";


    for (size_t i = Width - 1; i >= 0; i--)
    {
        for (size_t j = 0; j < Height; j++)
        {
            double u = double(i) / (Width - 1);
            double v = double(j) / (Height - 1);
            



            color pixel_color(r, g, b);
            write_color(out, pixel_color);
        }
    }
    out.close();

    //cout << "Hello World!\n";
}
