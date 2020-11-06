//#include<iostream>
//using namespace std;
//#include<string>
////英雄结构体
//struct Hero
//{
//	//英雄姓名
//	string heroName;
//	//英雄年龄
//	int age;
//	//英雄性别
//	string sex;
//};
//
////打印函数
//void Print_Array(struct Hero array[], int len)
//{
//	cout << "排序后: " << endl;
//	for (int i = 0; i < len; i++)
//	{
//		cout << "姓名: " << array[i].heroName << " "<< "年龄 " << array[i].age << " " << "性别: " << array[i].sex << " "<< endl;
//	}
//}
//
//
////冒泡排序
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
//	/*设计一个英雄的结构体, 包括成员姓名, 年龄, 性别;创建结构体数组,数组中存放5名
//	英雄.通过冒泡排序的算法,将数组中的英雄按照年龄进行升序排序,最终打印排序后的结果.*/
//
//	//1.创建数组
//	struct Hero array[5] = { {"刘备",30,"男"},
//	                         {"张飞",25,"男"},
//	                         {"关羽",28,"男"},
//	                         {"赵云",20,"男"},
//	                         {"貂蝉",17,"女"}
//	                       };
//
//	int len = sizeof(array) / sizeof(array[0]);//元素个数
//
//	cout << "排序前: " << endl;
//	for (int i = 0; i < len; i++)
//	{
//		cout << "姓名: " << array[i].heroName << " " << "年龄 " << array[i].age << " " << "性别: " << array[i].sex << " " << endl;
//	}
//
//	//2.冒泡排序
//	
//
//	bubble_sort(array,  len);
//
//	//3.打印排序后的数组
//
//	Print_Array(array, len);
//
//	system("pause");
//}