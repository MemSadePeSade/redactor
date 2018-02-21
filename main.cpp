#include"Controller.h"
#include"Figures.h"
#include<list>
#include<string>

/*!
Получает сообщение от операционной системы
*/
int GetMessage(Message* info) { return 0; };

/*!
Отсылает сообщение в нужные обработчики
*/
int DispatchMessage(Message* info)
{
	return 0;
};

/*!
Обработчик нажатия левой клавиши мыши
*/
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

/*!
Обработчик нажатия клавиши клавиатуры
*/
void OnKeyDown(Message* info)
{
	/*
	case клавиша 1 :  OnAddFigure1()
	case клавиша 2 :  OnAddFigure2()
	case клавиша 3 :  OnAddFigure3()
	case клавиша 4 :  OnDelete()
	case клавиша 5 :  OnSelect()
	*/
};

/*!
Функция рисования
*/
void OnDraw(GDI* pDC)
{
	/*
	пройти по controller.figures  и вызвать у каждого метод Draw
	*/
};
////////////////////////////////////////////////////////////
class WNDCLASS {};

int main()
{
	WNDCLASS windowClass;

	Message message;
	while (GetMessage(&message)) 
	{
		DispatchMessage(&message);
	}
	return 0;
}