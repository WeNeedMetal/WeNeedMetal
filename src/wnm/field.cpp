#include "wnm/field.hpp"

using namespace WeNeedMetal::wnm;

WeNeedMetal::wnm::Field::Field(const Vector3i& size) :
	m_size(size),
	m_terrain(boost::extents[m_size.x][m_size.y][m_size.z])
{ };