#pragma once
#include <iostream>
#include <string>
class Log_pass
{
public:
	Log_pass();//����������� �� ���������
	//void set_PasswUser(const std::string& newName);
	void set_PasswUser(const std::string&);
	void set_NameUserSend(const std::string&);
	void set_NameUserRecive(const std::string&);
	void set_Request(const std::string&);
	void set_CurrentState(const std::string&);
	void set_NumMess(const std::string&);  //���������� ��������
	void set_NumCurrMess(const std::string&); //����� ���������
	void set_Messaqge(const std::string&);
	//std::string Messaqge;
	void set_StateProgram(int);

	std::string& get_PasswordUser();
	std::string& get_NameUserSend();
	std::string& get_NameUserRecive();
	std::string& get_Request();
	std::string& get_CurrentState();
	std::string& get_Messaqge();
	std::string& get_NumMess();  //���������� ��������
	std::string& get_NumCurrMess(); //����� ���������
	std::string& get_currUser();
	int get_StateProgram();
	//----------------------------------------------------------------------
	void parser(char str[]);
	void addLogPass();
	std::string createMessLogToClient();
	//----------------------------------------------------------------------
private:
	int countObjectLogPass;//������� �������� ����� � �������
	int StateProgram;
	int curSession;
	std::string currUser;//��� ���� ������� ������� � �������

	Log_pass* ptrObject;// ��������� �� ������
	std::string login;//���� ������ � �������
	std::string password;// ���� ������ � �������

	std::string PasswordUser;//������ ������������  ����������� ���������
	std::string NameUserSend;// ��� ������������  ����������� ���������
	std::string NameUserRecive;//  ��� ������������ ������������ ���������
	std::string Request;// ������ �� ���������� ��������� (�������)
	std::string CurrentState;//������� ��������� ���������
	std::string NumCurrMess; //����� ���������
	std::string NumMess;  //���������� ��������
	std::string Messaqge;//���� ���������
};
