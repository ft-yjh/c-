//球员管理系统
#include<iostream>
using namespace std;
#include<string>
#define max 1000

//通讯录结构体
struct contact
{
	struct person person_array[1000];//联系人数组
	int m_size ;//球员个数
};

//联系人结构体
struct person
{
	string m_name;//姓名
	int m_sex;    //性别 1-男 2-女
	int m_age;    //年龄
	string m_phone; //电话号码
	string m_address;//家庭住址
};

void add_person(struct contact *p)
{
	if (p->m_size == max)
	{
		cout << "通讯录已满" << endl;
	}
	else
	{
		cout << "请输入姓名: " << endl;
		string t_name;//临时
		cin >> t_name;
		p->person_array[p->m_size].m_name = t_name;

		cout << "请输入性别: " << endl;
		cout << "1- 男   2- 女   " << endl;
		int t_sex;
		cin >> t_sex;
		p->person_array[p->m_size].m_sex = t_sex;

		cout << "请输入年龄: " << endl;
		int t_age = 0;
		cin >> t_age;
		p->person_array[p->m_size].m_age = t_age;

		cout << "请输入电话: " << endl;;
		string t_phone;
		cin >> t_phone;
		p->person_array[p->m_size].m_phone = t_phone;

		cout << "请输入家庭住址: " << endl;
		string t_address;
		cin >> t_address;
		p->person_array[p->m_size].m_address = t_address;
	
		p->m_size++;
	}

}


//打印菜单函数
void show_menu()
{
	cout << "************************" << endl;
	cout << "***** 1.添加联系人 *****" << endl;
	cout << "***** 2.显示联系人 ***** " << endl;
	cout << "***** 3.删除联系人 *****" << endl;
	cout << "***** 4.查找联系人 *****" << endl;
	cout << "***** 5.修改联系人 *****" << endl;
	cout << "***** 6.清空联系人 *****" << endl;
	cout << "***** 0.退出系统   ***** " << endl;
	cout << "************************" << endl;
}


int main()
{
	int select = 0;
	struct contact abs;//创建通讯录变量
	//个数重置
	abs.m_size = 0;

	while(true)
	{
		show_menu();//打印菜单
		cout << "请选择: " << endl;
		cin >> select;

		switch (select)
		{

		case 1:
		{
			//1.添加联系人
			add_person(&abs);
			break;
		}
		case 2:
		{

			//2.显示联系人
			break;
		}
		case 3:
		{
			//3.删除联系人
			break;
		}
		case 4:
		{
			//4.查找联系人
			break;

		}
		case 5:
		{
			//5.情况联系人
			break;
		}
		case 0:
		{
			//0.退出通讯录
			cout << "欢迎下次使用!!!" << endl;
			system("pause");
			return 0;
			break;


		}
		default:
			cout << "输入有误!" << endl;
		}


	}
	


	system("pause");

}