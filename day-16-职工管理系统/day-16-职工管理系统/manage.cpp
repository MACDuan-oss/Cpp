#include"manage.h"
#include<iostream>
using namespace std;

//构造函数的具体实现，对象初始化，自身的值=出入的值
Manage::Manage(int id, string name, int did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = did;
}
//显示个人信息函数的具体实现
void Manage::showInfo()
{
	cout << "员工编号:" << this->m_Id
		<< "\t姓名：" << this->m_Name
		<< "\t  岗位：" << this->getDeptName()
		<< "\t岗位职责：完成老板交代的任务" << endl;
}
//显示岗位名称函数的具体实现
string Manage::getDeptName()
{
	return "公司经理";
}
