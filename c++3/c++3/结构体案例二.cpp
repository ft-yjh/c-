//#include<iostream>
//using namespace std;
//#include<string>
////Ӣ�۽ṹ��
//struct Hero
//{
//	//Ӣ������
//	string heroName;
//	//Ӣ������
//	int age;
//	//Ӣ���Ա�
//	string sex;
//};
//
////��ӡ����
//void Print_Array(struct Hero array[], int len)
//{
//	cout << "�����: " << endl;
//	for (int i = 0; i < len; i++)
//	{
//		cout << "����: " << array[i].heroName << " "<< "���� " << array[i].age << " " << "�Ա�: " << array[i].sex << " "<< endl;
//	}
//}
//
//
////ð������
//void bubble_sort(struct Hero array[], int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - i - 1; j++)
//		{
//			if (array[j].age > array[j + 1].age)
//			{
//				struct Hero temp = array[j];
//				array[j] = array[j + 1];
//				array[j + 1] = temp;
//			}
//		}
//	}
//}
//
//
//int main()
//{
//
//	/*���һ��Ӣ�۵Ľṹ��, ������Ա����, ����, �Ա�;�����ṹ������,�����д��5��
//	Ӣ��.ͨ��ð��������㷨,�������е�Ӣ�۰������������������,���մ�ӡ�����Ľ��.*/
//
//	//1.��������
//	struct Hero array[5] = { {"����",30,"��"},
//	                         {"�ŷ�",25,"��"},
//	                         {"����",28,"��"},
//	                         {"����",20,"��"},
//	                         {"����",17,"Ů"}
//	                       };
//
//	int len = sizeof(array) / sizeof(array[0]);//Ԫ�ظ���
//
//	cout << "����ǰ: " << endl;
//	for (int i = 0; i < len; i++)
//	{
//		cout << "����: " << array[i].heroName << " " << "���� " << array[i].age << " " << "�Ա�: " << array[i].sex << " " << endl;
//	}
//
//	//2.ð������
//	
//
//	bubble_sort(array,  len);
//
//	//3.��ӡ����������
//
//	Print_Array(array, len);
//
//	system("pause");
//}