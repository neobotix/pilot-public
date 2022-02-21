/*
 * PositionAny.cpp
 *
 *  Created on: Feb 04, 2022
 *      Author: jaw
 */

#include <pilot/kinematics/PositionAny.hxx>


namespace pilot {
namespace kinematics {


double PositionAny::get(const position_code_e &position) const{
	auto find = positions.find(position);
	if(find == positions.end()){
		throw std::logic_error("Position " + vnx::to_string(position) + " not available");
	}
	return find->second;
}


void PositionAny::set(const position_code_e &position, const double &value){
	positions[position] = value;
}


} // kinematics
} // pilot
