#include<iostream>
#include<windows.h>
#include<fstream>
#include<unistd.h>
#pragma comment(lib,"Advapi32.lib")
using namespace std;
int main()
{
	/*/
	����һ����Դ���롣�κ��˿��Ա༭���á�
	---Sign in with Lv---
	����:Mingxuan Lv
	����鿴˵���ͽ��뷽�������Ķ�readme.md��
	/*/
	//accΪ��ʱ������
	string acc; 
	char data[100];
    ifstream file;
    file.open("c:\\account.ini");
    file >> data;
	cout<<"����ʹ���¼..."<<endl; 
    char tf;
	acc=data;
	if(acc=="")
	{
		cout<<"�޷��ҵ����е��˻������ֶ�����һ����"<<endl;
		cout<<"δע���˻����Զ�ע�ᡣ"<<endl;
		cout<<"�û�����";
		string username;
		cin>>username;
		
		cout<<"����:";
		string password;
		cin>>password;
		cout<<"��ɡ�"<<endl;
		acc=username;
		//......
	} 
	else
	{
		cout<<"��ɡ�"<<endl;
		//......
	}
    file.close();

}

