#pragma once
#include"Figures.h"

#include<list>
#include<string>

/////////////////////////////////////// 
struct Message {};
enum ActionState { ADD_FIGURE1, ADD_FIGURE2, ADD_FIGURE3, SELECT };
ActionState g_ActionState;
//////////////////////////////////////////////////////////////////////////

class Controlller
{
	Controlller() {};
	void Serialize(std::string filename);
	void DeSerialize(std::string filename);

	void Select(Message* info)
	{
		//выделить фигуру, на которую кликнули
	};


	void OnAddFigure1()
	{
		DeSelected();
		g_ActionState = ADD_FIGURE1;
	};
	void OnAddFigure2()
	{
		DeSelected();
		g_ActionState = ADD_FIGURE2;
	};
	void OnAddFigure3()
	{
		DeSelected();
		g_ActionState = ADD_FIGURE3;
	};

	void OnSelect()
	{
		g_ActionState = SELECT;
	}

	void OnDelete()
	{
		/*
		пройти по figures если Selected, то удалить
		*/
	};

private:
	static bool IsSelected(Figure& figure)
	{
		// проверить выделена ли фигура
		return 0;
	};
	void DeSelected()
	{
		//убрать выделение с фигур
	};

private:
	std::list<Figure> figures;
};