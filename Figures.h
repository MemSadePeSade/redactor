#pragma once
struct GDI {}; // graphical device interface
struct Figure
{
	int x, y;  // положение фигуры
	int w, h;  // параметры прямоугольника содержащего фигуру
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

struct Figure1 : Figure
{
	virtual void JustDraw(GDI* pDC) {};
	virtual void DrawSel(GDI* pDC) {};
};
struct Figure2 : Figure
{
	virtual void JustDraw(GDI* pDC) {};
	virtual void DrawSel(GDI* pDC) {};
};
struct Figure3 : Figure
{
	virtual void JustDraw(GDI* pDC) {};
	virtual void DrawSel(GDI* pDC) {};
};