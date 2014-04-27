#ifndef _HPP_WNM_GUI_GAME_
#define _HPP_WNM_GUI_GAME_

#include "structs/vector.hpp"
#include "base.hpp"

using namespace WeNeedMetal;

namespace WeNeedMetal { namespace gui
{
    class GameControll : public Controll
    {
    public:
        GameControll();

		virtual void CallbackMouseMove(Vector2 pos);
		virtual void CallbackMouseEnter();
		virtual void CallbackMouseLeave();

		virtual void Rendering();
    };
}}

#endif
