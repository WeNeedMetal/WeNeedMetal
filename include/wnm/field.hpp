#ifndef __HPP_WNM_WNM_FIELD__
#define __HPP_WNM_WNM_FIELD__

#include <boost/multi_array.hpp>

#include "structs/base.hpp"
#include "wnm/block.hpp"

namespace WeNeedMetal { namespace wnm {
	class Field {
		typedef boost::multi_array<Block, 3> Terrain;

		Vector3i m_size;
		Terrain m_terrain;

	public:
		Field(const Vector3i &size);
	};
}}

#endif