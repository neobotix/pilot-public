/*
 * Incident.cpp
 *
 *  Created on: Apr 30, 2021
 *      Author: mad
 */

#include <pilot/Incident.hxx>


namespace pilot {

std::shared_ptr<const Incident> Incident::create_ex(const int64_t& time, const event_t& event, const int32_t& level, const ::vnx::Object& info, const vnx::bool_t& is_active, const int32_t& timeout_ms)
{
	auto out = Incident::create();
	out->time = time;
	out->event = event;
	out->level = level;
	out->info = info;
	out->is_active = is_active;
	out->timeout_ms = timeout_ms;
	return out;
}


std::string Incident::to_log_message() const{
	return (is_cleared ? "Cleared " : "Incident ") + event.type.to_string_value() + ": " + event.module + " -> " + event.code_type + " -> " + event.code;
}


} // pilot
