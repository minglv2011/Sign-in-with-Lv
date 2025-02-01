/*
来自2025年2月1日的补充:请不要把这个项目当成一个正经的项目，该项目是我十岁是瞎jb写的，内容完全没有逻辑和技术性可言，就是一坨屎。请各位轻点喷，当个乐子就行，切勿当真。
*/
#include<iostream>
#include<windows.h>
#include<fstream>
#include<unistd.h>
#pragma comment(lib,"Advapi32.lib")
using namespace std;
int main()
{
	/*/
	这是一个开源代码。任何人可以编辑商用。
	---Sign in with Lv---
	作者:Mingxuan Lv
	如需查看说明和介入方法，请阅读readme.md。
	/*/
	//acc为临时变量。
	string acc; 
	char data[100];
    ifstream file;
    file.open("c:\\account.ini");
    file >> data;
	cout<<"尝试使你登录..."<<endl; 
    char tf;
	acc=data;
	if(acc=="")
	{
		cout<<"无法找到现有的账户。请手动输入一个。"<<endl;
		cout<<"未注册账户将自动注册。"<<endl;
		cout<<"用户名：";
		string username;
		cin>>username;
		
		cout<<"密码:";
		string password;
		cin>>password;
		cout<<"完成。"<<endl;
		acc=username;
		//......
	} 
	else
	{
		cout<<"完成。"<<endl;
		//......
	}
    file.close();

}

