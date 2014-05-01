#ifndef _HPP_WNM_GUI_BASE_
#define _HPP_WNM_GUI_BASE_

#include <iostream>
#include <memory>

#include <structs/vector.hpp>

#include "structs/base.hpp"

namespace WeNeedMetal { namespace gui
{

    class Controll
    {
	private:
		Vector2i size;
        weak_ptr<Controll> parent;
		Matrix4 position;

	public:
		Controll(Vector2i size, weak_ptr<Controll> parent = weak_ptr<Controll>());

        void SetParent(weak_ptr<Controll> ctrl);
        weak_ptr<Controll> GetParent();
		bool IsRoot();
		void ApplyMatrix();


		virtual void CallbackMouseMove(Vector2i pos);
		virtual void CallbackMouseEnter();
		virtual void CallbackMouseLeave();
		virtual void CallbackKeyPress(Keyboard key);
		virtual void CallbackKeyRepeat(Keyboard key);
		virtual void CallbackKeyRelease(Keyboard key);
		virtual void CallbackCharEnter(char c);
		virtual void CallbackMousePress(Mouse mouse);
		virtual void CallbackMouseRelease(Mouse mouse);
		virtual void CallbackWheel(double wheel);

		virtual void ChangeSize(Vector2i size);
		Vector2i GetSize();

		virtual void Rendering();
    };

}}

#endif
