#pragma once
#include "LogPass.h"
const int maxPerson = 3;//������������ ���������� ����� ������� ����� �������� � ����
static int countObject;
static int curSesion;//�������� ������
const int maxMess = 100;//������������ ���������� ��������� � ����
int createNullMap()// �������� ������ ���������
{
	int size;
	Log_pass* pSt = new Log_pass;
	Log_pass& st = *pSt;
	for (int i = 0; i < maxMess; ++i) {
		Messages* pMess = new Messages;
		Messages& mess = *pMess; //�������������� ��������� � ������
		size = st.AddScore(i, mess);
	}
	return size;
}
