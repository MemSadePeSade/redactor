#include"Controller.h"
#include"Figures.h"

#include<list>
#include<string>

//////////////////////////////////////////  GUI  handlers
int GetMessage(Message* info) { return 0; };
int TranslateMessage(Message* info)
{
	// ������������� ������� ������� � ���������
	return 0;
};
int DispatchMessage(Message* info)
{
	// �������� ��������� � ������ �����������
	return 0;
};


void OnLButtonDown(Message* info)
{
	/*
	switch (ActionState)
	{
		case ADD_FIGURE1: Controller.AddFigure1(Info)
		case ADD_FIGURE2: Controller.AddFigure2(Info)
		case ADD_FIGURE3: Controller.AddFigure3(Info)
		case SELECT: Controller.Select(Info)
	}
	*/
};

void OnKeyDown(Message* info)
{
	/*
	case ������� 1 :  OnAddFigure1()
	case ������� 2 :  OnAddFigure2()
	case ������� 3 :  OnAddFigure3()
	case ������� 4 :  OnDelete()
	case ������� 5 :  OnSelect()
	*/
};

void OnDraw(GDI* pDC)
{
	/*
	������ �� controller.figures  � ������� � ������� ����� Draw
	*/
};
////////////////////////////////////////////////////////////
class WNDCLASS {};

int main()
{
	WNDCLASS windowClass;

	Message message;
	while (GetMessage(&message)) {
		TranslateMessage(&message);
		DispatchMessage(&message);
	}
	return 0;
}