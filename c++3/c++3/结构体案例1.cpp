//#include<iostream>
//using namespace std;
//#include<string>
//#include<ctime>
////ѧ���ṹ��
//struct student
//{
//	string sName;
//	int score;
//};
//
////��ʦ�ṹ��
//struct teacher
//{
//	string tName;
//	struct student stu[5];
//
//};
//
////��ӡ����
//void Print_Array(struct teacher tea[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "��ʦ����: " << tea[i].tName << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\tѧ������" << tea[i].stu[j].sName << " " <<"�ɼ�" << tea[i].stu[j].score << endl;
//		}
//	}
//}
//
//
////��ֵ����
//	void allocate_space(struct teacher tea[], int len)
//	{
//		string TName = { "ABCDE" };
//
//		for (int i = 0; i < len; i++)
//		{
//			tea[i].tName = "Teacher_";
//			tea[i].tName += TName[i];
//			for (int j = 0; j < 5; j++)
//			{
//				tea[i].stu[j].sName = "Student_";
//				tea[i].stu[j].sName +=  TName[j];
//
//				tea[i].stu[j].score = rand() % 61 + 40;
//			}
//		}
//	}
//int main()
//{
//	/*����:ѧ������������Ŀ,ÿ����ʦ������ѧ��,����������ʦ,���ѧ������ʦ�Ľṹ��
//	����ʦ������һ���������ѧ����������Ϊ��Ա,ѧ���ĳ�Ա������,���Է���,��������
//	���������ʦ,ͨ��������ÿ����ʦ��������ѧ����ֵ,���մ�ӡ����ʦ���ݼ���ʦ������
//	ѧ������*/
//
//	//���������
//	srand((unsigned int)time(NULL));
//
//
//
//	//1. ��������
//	struct teacher tea[3];
//	int len = sizeof(tea) / sizeof(tea[0]);
//	//2.�����鸳ֵ
//	allocate_space(tea, len);
//
//	//3.��ӡ����
//	Print_Array(tea, len);
//
//	system("pause");
//}