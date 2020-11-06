//#include<iostream>
//using namespace std;
//#include<string>
//#include<ctime>
////学生结构体
//struct student
//{
//	string sName;
//	int score;
//};
//
////老师结构体
//struct teacher
//{
//	string tName;
//	struct student stu[5];
//
//};
//
////打印函数
//void Print_Array(struct teacher tea[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "老师姓名: " << tea[i].tName << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\t学生姓名" << tea[i].stu[j].sName << " " <<"成绩" << tea[i].stu[j].score << endl;
//		}
//	}
//}
//
//
////赋值函数
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
//	/*案例:学生在做毕设项目,每名老师带五名学生,共有三个老师,设计学生和老师的结构体
//	有老师姓名和一个存放五名学生的数组作为成员,学生的成员有姓名,考试分数,创建数组
//	存放三名老师,通过函数给每个老师及所带的学生赋值,最终打印出老师数据及老师所带的
//	学生数据*/
//
//	//随机数种子
//	srand((unsigned int)time(NULL));
//
//
//
//	//1. 创建数组
//	struct teacher tea[3];
//	int len = sizeof(tea) / sizeof(tea[0]);
//	//2.给数组赋值
//	allocate_space(tea, len);
//
//	//3.打印数组
//	Print_Array(tea, len);
//
//	system("pause");
//}