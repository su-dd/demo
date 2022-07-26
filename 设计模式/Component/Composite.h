﻿#ifndef Composite_H #define Composite_H  #include <iostream> #include <vector> #include <string> #include "Component.h"  using namespace std;  class Composite : public Component { public: 	Composite(string key)  		: Component(key) 		, m_nNeedNum(0) 	{ 	}  	virtual ~Composite() 	{ 		m_oChildren.clear(); 	}  public: 	void add(Component* component) 	{ 		m_oChildren.push_back(component); 		component->setParent(this); 		refresh(); 	}  	void remove(int index) 	{ 		m_oChildren.erase(m_oChildren.begin() + index); 		refresh(); 	}  	Component* getChild(int index) 	{  		m_oChildren[index]; 	}  	void refresh()  	{ 		m_nNeedNum = 0; 		for each (auto var in m_oChildren) 		{ 			m_nNeedNum += var->needNum(); 		} 		getParent()->refresh(); 	} public: 	int buy(int num) 	{ 		cout << m_sKey << "进货" << num << "根雪糕！" << endl; 		for each (auto var in m_oChildren) 		{ 			var->buy(var->needNum()) ; 		} 	}  	int needNum() 	{ 		return m_nNeedNum; 	}  private: 	int m_nNeedNum; 	vector<Component*> m_oChildren; }; #endif // Composite_H