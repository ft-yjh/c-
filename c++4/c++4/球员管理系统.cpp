//��Ա����ϵͳ
#include<iostream>
using namespace std;
#include<string>
#define max 1000

//ͨѶ¼�ṹ��
struct contact
{
	struct person person_array[1000];//��ϵ������
	int m_size ;//��Ա����
};

//��ϵ�˽ṹ��
struct person
{
	string m_name;//����
	int m_sex;    //�Ա� 1-�� 2-Ů
	int m_age;    //����
	string m_phone; //�绰����
	string m_address;//��ͥסַ
};

void add_person(struct contact *p)
{
	if (p->m_size == max)
	{
		cout << "ͨѶ¼����" << endl;
	}
	else
	{
		cout << "����������: " << endl;
		string t_name;//��ʱ
		cin >> t_name;
		p->person_array[p->m_size].m_name = t_name;

		cout << "�������Ա�: " << endl;
		cout << "1- ��   2- Ů   " << endl;
		int t_sex;
		cin >> t_sex;
		p->person_array[p->m_size].m_sex = t_sex;

		cout << "����������: " << endl;
		int t_age = 0;
		cin >> t_age;
		p->person_array[p->m_size].m_age = t_age;

		cout << "������绰: " << endl;;
		string t_phone;
		cin >> t_phone;
		p->person_array[p->m_size].m_phone = t_phone;

		cout << "�������ͥסַ: " << endl;
		string t_address;
		cin >> t_address;
		p->person_array[p->m_size].m_address = t_address;
	
		p->m_size++;
	}

}


//��ӡ�˵�����
void show_menu()
{
	cout << "************************" << endl;
	cout << "***** 1.�����ϵ�� *****" << endl;
	cout << "***** 2.��ʾ��ϵ�� ***** " << endl;
	cout << "***** 3.ɾ����ϵ�� *****" << endl;
	cout << "***** 4.������ϵ�� *****" << endl;
	cout << "***** 5.�޸���ϵ�� *****" << endl;
	cout << "***** 6.�����ϵ�� *****" << endl;
	cout << "***** 0.�˳�ϵͳ   ***** " << endl;
	cout << "************************" << endl;
}


int main()
{
	int select = 0;
	struct contact abs;//����ͨѶ¼����
	//��������
	abs.m_size = 0;

	while(true)
	{
		show_menu();//��ӡ�˵�
		cout << "��ѡ��: " << endl;
		cin >> select;

		switch (select)
		{

		case 1:
		{
			//1.�����ϵ��
			add_person(&abs);
			break;
		}
		case 2:
		{

			//2.��ʾ��ϵ��
			break;
		}
		case 3:
		{
			//3.ɾ����ϵ��
			break;
		}
		case 4:
		{
			//4.������ϵ��
			break;

		}
		case 5:
		{
			//5.�����ϵ��
			break;
		}
		case 0:
		{
			//0.�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��!!!" << endl;
			system("pause");
			return 0;
			break;


		}
		default:
			cout << "��������!" << endl;
		}


	}
	


	system("pause");

}