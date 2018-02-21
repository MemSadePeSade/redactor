#pragma once

/*!
\brief graphical device interface
*/
struct GDI; 

/*!
\brief ������� ����� ��� ���� ����������� ����������

������ ����� ����� ������ ���� ������� ����: ����������������� ��,
��� Doxygen ������������� ������������
*/
struct Figure
{
	int x, y;  // ��������� ������
	int w, h;  // ��������� �������������� ����������� ������
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
\brief ����� ��� ������������ ��������� Figure1  
*/
struct Figure1 : Figure
{
	virtual void JustDraw(GDI* pDC) {};
	virtual void DrawSel(GDI* pDC) {};
};

/*!
\brief ����� ��� ������������ ��������� Figure2  
*/
struct Figure2 : Figure
{
	virtual void JustDraw(GDI* pDC) {};
	virtual void DrawSel(GDI* pDC) {};
};

/*!
\brief ����� ��� ������������ ��������� Figure3
*/
struct Figure3 : Figure
{
	virtual void JustDraw(GDI* pDC) {};
	virtual void DrawSel(GDI* pDC) {};
};