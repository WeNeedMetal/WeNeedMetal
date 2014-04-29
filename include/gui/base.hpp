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
		Vector2 size;
        weak_ptr<Controll> parent;
		Matirx4 position, desition;

	public:
		Controll(Vector2 size, weak_ptr<Controll> parent = weak_ptr<Controll>());

        void SetParent(weak_ptr<Controll> ctrl);
        weak_ptr<Controll> GetParent();
		bool IsRoot();
		void PushMatrix();
		void PopMatrix();


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

		virtual void ChangeSize(Vector2 size);
		Vector2 GetSize();

		virtual void Rendering();
    };

}}

#endif
