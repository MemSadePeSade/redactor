#pragma once

/*!
\brief graphical device interface
*/
struct GDI; 

/*!
\brief Ѕазовый класс дл€ всех графических примитивов

ƒанный класс имеет только одну простую цель: проиллюстрировать то,
как Doxygen документирует наследование
*/
struct Figure
{
	int x, y;  // положение фигуры
	int w, h;  // параметры пр€моугольника содержащего фигуру
	int col;   // color;
	bool selected;

	void Draw(GDI* pDC)
	{
		if (selected)
		{
			DrawSel(pDC);
		}
		else
		{
			JustDraw(pDC);
		}
	};
	virtual void JustDraw(GDI* pDC);
	virtual void DrawSel(GDI* pDC);
};

/*!
\brief класс дл€ графического примитива Figure1  
*/
struct Figure1 : Figure
{
	virtual void JustDraw(GDI* pDC) {};
	virtual void DrawSel(GDI* pDC) {};
};

/*!
\brief класс дл€ графического примитива Figure2  
*/
struct Figure2 : Figure
{
	virtual void JustDraw(GDI* pDC) {};
	virtual void DrawSel(GDI* pDC) {};
};

/*!
\brief класс дл€ графического примитива Figure3
*/
struct Figure3 : Figure
{
	virtual void JustDraw(GDI* pDC) {};
	virtual void DrawSel(GDI* pDC) {};
};