using namespace std;
#include "CMyList.h"
#include <iostream>

CMyList::~CMyList() 
{
	DNode* del = headNode;
	DNode* delNext = del->link;
	delete del;
	while (delNext)
	{
		del = delNext;
		delNext = delNext->link;
		delete del;
	}
}

void CMyList::ShowMenu() 
{
	cout << "\n-----------------" << endl;
	cout << "CMyList 메뉴" << endl;
	cout << "1 삽입" << endl;
	cout << "2 출력" << endl;
	cout << "0 종료" << endl;
	cout << "-----------------" << endl;
	cout << " 메뉴를 고르세요(숫자 입력) : ";
}

void CMyList::Insert()
{
	int num;
	cout << "\n 삽입할 데이터를 입력해주세요 : ";
	cin >> num;

	DNode* newNode = new DNode();
	newNode->data = num;
	newNode->link = nullptr;

	if (m_nLength == 0)
	{
		headNode = newNode;
		tailNode = newNode;
		m_nLength++;
	}
	else 
	{	
		tailNode->link = newNode;
		tailNode = newNode;
		m_nLength++;
	}

	Print();
}

void CMyList::Print() 
{
	DNode* cur = headNode;
	cout << "\n CMyList 데이터 : [Head]";
	for (int i = 0; i < m_nLength; i++)
	{
		cout << " " << cur->data;
		cur = cur->link;
	}
	cout << " [Tail]" << endl;
	cout << " 데이터 개수 : " << m_nLength << "개" << endl;
}