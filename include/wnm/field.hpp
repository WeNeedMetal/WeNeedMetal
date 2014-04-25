#ifndef _HPP_WNM_WNM_FIELD_
#define _HPP_WNM_WNM_FIELD_

#include <boost/multi_array.hpp>

#include "structs/base.hpp"
#include "wnm/block.hpp"

namespace WeNeedMetal { namespace wnm {
	class Field {
		typedef boost::multi_array<Block, 2> Terrain;

		Vector3i m_size;
		Terrain m_terrain;

	public:
		Field(const Vector3i &size);
	};
}}

#endif