#ifndef _HPP_WNM_GUI_BASE_
#define _HPP_WNM_GUI_BASE_

#include <iostream>

#include <structs/vector.hpp>

#include "structs/base.hpp"

namespace WeNeedMetal { namespace gui
{

    class Controll
    {

	public:
        
        void setParent(Controll* ctrl);
        Controll* getParent();
        Controll* m_parent;

		virtual void CallbackMouseMove(Vector2 pos);
		virtual void CallbackMouseEnter();
		virtual void CallbackMouseLeave();
		virtual void CallbackKeyPress(Keyboard key);
		virtual void CallbackKeyRepeat(Keyboard key);
		virtual void CallbackKeyRelease(Keyboard key);
		virtual void CallbackCharEnter(char c);
		virtual void CallbackMousePress(Mouse mouse);
		virtual void CallbackMouseRelease(Mouse mouse);
		virtual void CallbackWheel(double wheel);

		virtual void Rendering();
    };

}}

#endif
