/*
 * event_t.cpp
 *
 *  Created on: Apr 29, 2021
 *      Author: mad
 */

#include <pilot/event_t.hxx>


namespace pilot {

std::tuple<std::string, std::string, std::string> event_t::get_key() const
{
	return std::make_tuple(module, code_type, code);
}

event_t event_t::create_ex(const ::pilot::event_type_e& type, const std::string& module, const std::string& code_type, const std::string& code)
{
	event_t out;
	out.type = type;
	out.module = module;
	out.code_type = code_type;
	out.code = code;
	return out;
}


} // pilot
