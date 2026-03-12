/*
 * EmergencyState.cpp
 *
 *  Created on: Mar 11, 2026
 *      Author: jaw
 */

#include <pilot/EmergencyState.hxx>


namespace pilot {


bool EmergencyState::is_free() const{
	return state == em_stop_state_e::FREE;
}


bool EmergencyState::has_code(const safety_code_e &code) const{
	return (codes.find(code) != codes.end());
}


} // pilot
