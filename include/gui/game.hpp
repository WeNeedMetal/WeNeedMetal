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

		void MouseMove(Vector2 pos);
		void Rendering();
    };
}}

#endif
