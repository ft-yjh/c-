//#include<iostream>
//using namespace std;
//
////��������������ֵ
////1.��Ҫ���ؾֲ�����������
//int & test01()
//{
//	int a = 10;//�ֲ���������������е�ջ��
//	return a;
//}
//
////2.�����ĵ��ÿ�����Ϊ��ֵ
//int& test02()
//{
//	static int a = 10;//��̬����,�����ȫ����,�ڳ���������Զ��ͷ�
//	return a;
//}
//
//
//
//int main()
//{
//	//int& ret1 = test01();
//	//cout << "ret1 = " << ret1 << endl;//��һ�����������Ϊ������������һ��
//	//cout << "ret1 = " << ret1 << endl;//�ڴ����ͷ�
//	//cout << "ret1 = " << ret1 << endl;
//	int &ret2 = test02();
//	cout << "ret2 = " << ret2 << endl;
//	cout << "ret2 = " << ret2 << endl;
//	test02() = 1000;//��������ķ���ֵ������,��������ĵ��ÿ�����Ϊ��ֵ
//	cout << "ret2 = " << ret2 << endl;
//	cout << "ret2 = " << ret2 << endl;
//
//	system("pause");
//	return 0;
//}