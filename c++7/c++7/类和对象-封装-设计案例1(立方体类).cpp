///*����1:
//�����������
//������������������
//�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����*/
//#include<iostream>
//using namespace std;
//
////1.�������������
//class Cube
//{
//private:
//	//2�������
//	int m_L;
//	int m_W;
//	int m_H;
//public:
//	//3.�����Ϊ ��ȡ��������������
//	//���ó�
//	void setL(int l)
//	{
//		m_L = l;
//	}
//
//	//��ȡ��
//	int getL()
//	{
//		return m_L;
//	}
//
//	//���ÿ�
//	void setW(int w)
//	{
//		m_W = w;
//	}
//
//	//��ȡ��
//	int getW()
//	{
//		return m_W;
//	}
//
//	//���ø�
//	void setH(int h)
//	{
//		m_H = h;
//	}
//
//	//��ȡ��
//	int getH()
//	{
//		return m_H;
//	}
//
//	//��ȡ���
//	int getS()
//	{
//		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_W * m_H;
//	}
//
//	//��ȡ���
//	int getV()
//	{
//		return m_L * m_W * m_H;
//	}
//	
//	//���ó�Ա�����ж��Ƿ����
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
////����ȫ�ֺ����ж������������Ƿ����
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
//	cout << "���Ϊ: " << c1.getS() << endl;
//	cout << "���Ϊ: " << c1.getV() << endl;
//
//	Cube c2;
//	c2.setL(10);
//	c2.setW(10);
//	c2.setH(10);
//
//	//ȫ�ֺ����ж�
//	bool ret = Is_Same(c1, c2);
//		if (ret)
//		{
//			cout << "���" << endl;
//		}
//		else
//		{
//			cout << "�����" << endl;
//		}
//
//		//��Ա�����ж�
//        ret = c1.Is_SameByClass(c2);
//		if (ret)
//		{
//			cout << "��Ա�����ж����" << endl;
//		}
//		else
//		{
//			cout << "��Ա�����жϲ����" << endl;
//		}
//
//
//	system("pause");
//	return 0;
//}