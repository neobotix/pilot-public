/*
 * Event.cpp
 *
 *  Created on: Apr 30, 2021
 *      Author: mad
 */

#include <pilot/Event.hxx>


namespace pilot {

std::shared_ptr<const Event> Event::create_ex(const int64_t& time, const event_t& event, const int32_t& level, const ::vnx::Object& info)
{
	auto out = Event::create();
	out->time = time;
	out->event = event;
	out->level = level;
	out->info = info;
	return out;
}


} // pilot
