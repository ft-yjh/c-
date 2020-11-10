///*案例1:
//设计立方体类
//求出立方体的面积和体积
//分别用全局函数和成员函数判断两个立方体是否相登*/
//#include<iostream>
//using namespace std;
//
////1.创建立方体的类
//class Cube
//{
//private:
//	//2设计属性
//	int m_L;
//	int m_W;
//	int m_H;
//public:
//	//3.设计行为 获取立方体面积和体积
//	//设置长
//	void setL(int l)
//	{
//		m_L = l;
//	}
//
//	//获取长
//	int getL()
//	{
//		return m_L;
//	}
//
//	//设置宽
//	void setW(int w)
//	{
//		m_W = w;
//	}
//
//	//获取宽
//	int getW()
//	{
//		return m_W;
//	}
//
//	//设置高
//	void setH(int h)
//	{
//		m_H = h;
//	}
//
//	//获取高
//	int getH()
//	{
//		return m_H;
//	}
//
//	//获取面积
//	int getS()
//	{
//		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_W * m_H;
//	}
//
//	//获取体积
//	int getV()
//	{
//		return m_L * m_W * m_H;
//	}
//	
//	//利用成员函数判断是否相等
//	bool Is_SameByClass(Cube & c)
//	{
//		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
//			return true;
//		else
//			return  false;
//	}
//
//};
//
////利用全局函数判断两个立方体是否相等
//bool Is_Same(Cube & c1, Cube & c2)
//{
//	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
//		return true;
//	else
//		return  false;
//}
//
//int main()
//{
//
//	Cube c1;
//	c1.setL(10);
//	c1.setW(10);
//	c1.setH(10);
//	cout << "面积为: " << c1.getS() << endl;
//	cout << "体积为: " << c1.getV() << endl;
//
//	Cube c2;
//	c2.setL(10);
//	c2.setW(10);
//	c2.setH(10);
//
//	//全局函数判断
//	bool ret = Is_Same(c1, c2);
//		if (ret)
//		{
//			cout << "相等" << endl;
//		}
//		else
//		{
//			cout << "不相等" << endl;
//		}
//
//		//成员函数判断
//        ret = c1.Is_SameByClass(c2);
//		if (ret)
//		{
//			cout << "成员函数判断相等" << endl;
//		}
//		else
//		{
//			cout << "成员函数判断不相等" << endl;
//		}
//
//
//	system("pause");
//	return 0;
//}