/*
 * Position2Any.cpp
 *
 *  Created on: Nov 12, 2024
 *      Author: jaw
 */

#include <pilot/kinematics/Position2Any.hxx>


namespace pilot {
namespace kinematics {


Position2 Position2Any::get(const position_code_e &position) const{
	const auto find = positions.find(position);
	if(find == positions.end()){
		throw std::logic_error("Position " + vnx::to_string(position) + " not available");
	}
	return find->second;
}


void Position2Any::set(const position_code_e &position, const Position2 &value){
	positions[position] = value;
}


} // kinematics
} // pilot
