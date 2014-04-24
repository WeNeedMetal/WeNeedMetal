#ifndef _HPP_WNM_GUI_BASE_
#define _HPP_WNM_GUI_BASE_

#include <iostream>

#include <structs/vector.hpp>

namespace WeNeedMetal { namespace gui
{

    class Controll
    {

	public:
        
        void setParent(Controll* ctrl);
        Controll* getParent();
        Controll* m_parent;

		virtual void MouseMove(Vector2 pos) = 0;
		virtual void Rendering() = 0;
    };

}}

#endif
