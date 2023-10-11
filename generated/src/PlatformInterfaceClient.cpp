
// AUTO GENERATED by vnxcppcodegen

#include <pilot/package.hxx>
#include <pilot/PlatformInterfaceClient.hxx>
#include <pilot/PlatformInterface_charge.hxx>
#include <pilot/PlatformInterface_charge_return.hxx>
#include <pilot/PlatformInterface_read_analog_input.hxx>
#include <pilot/PlatformInterface_read_analog_input_return.hxx>
#include <pilot/PlatformInterface_read_digital_input.hxx>
#include <pilot/PlatformInterface_read_digital_input_return.hxx>
#include <pilot/PlatformInterface_set_digital_output.hxx>
#include <pilot/PlatformInterface_set_digital_output_return.hxx>
#include <pilot/PlatformInterface_set_display_text.hxx>
#include <pilot/PlatformInterface_set_display_text_return.hxx>
#include <pilot/PlatformInterface_set_led.hxx>
#include <pilot/PlatformInterface_set_led_return.hxx>
#include <pilot/PlatformInterface_set_leds.hxx>
#include <pilot/PlatformInterface_set_leds_return.hxx>
#include <pilot/PlatformInterface_set_relay.hxx>
#include <pilot/PlatformInterface_set_relay_return.hxx>
#include <pilot/PlatformInterface_shutdown.hxx>
#include <pilot/PlatformInterface_shutdown_return.hxx>
#include <pilot/PlatformInterface_start_charging.hxx>
#include <pilot/PlatformInterface_start_charging_return.hxx>
#include <pilot/PlatformInterface_stop_charging.hxx>
#include <pilot/PlatformInterface_stop_charging_return.hxx>
#include <pilot/PlatformInterface_wait_for_digital_input.hxx>
#include <pilot/PlatformInterface_wait_for_digital_input_return.hxx>
#include <pilot/led_color_e.hxx>

#include <vnx/Generic.hxx>
#include <vnx/vnx.h>


namespace pilot {

PlatformInterfaceClient::PlatformInterfaceClient(const std::string& service_name)
	:	Client::Client(vnx::Hash64(service_name))
{
}

PlatformInterfaceClient::PlatformInterfaceClient(vnx::Hash64 service_addr)
	:	Client::Client(service_addr)
{
}

void PlatformInterfaceClient::charge() {
	auto _method = ::pilot::PlatformInterface_charge::create();
	vnx_request(_method, false);
}

void PlatformInterfaceClient::charge_async() {
	auto _method = ::pilot::PlatformInterface_charge::create();
	vnx_request(_method, true);
}

void PlatformInterfaceClient::start_charging() {
	auto _method = ::pilot::PlatformInterface_start_charging::create();
	vnx_request(_method, false);
}

void PlatformInterfaceClient::start_charging_async() {
	auto _method = ::pilot::PlatformInterface_start_charging::create();
	vnx_request(_method, true);
}

void PlatformInterfaceClient::stop_charging() {
	auto _method = ::pilot::PlatformInterface_stop_charging::create();
	vnx_request(_method, false);
}

void PlatformInterfaceClient::stop_charging_async() {
	auto _method = ::pilot::PlatformInterface_stop_charging::create();
	vnx_request(_method, true);
}

void PlatformInterfaceClient::set_relay(const int32_t& channel, const vnx::bool_t& state) {
	auto _method = ::pilot::PlatformInterface_set_relay::create();
	_method->channel = channel;
	_method->state = state;
	vnx_request(_method, false);
}

void PlatformInterfaceClient::set_relay_async(const int32_t& channel, const vnx::bool_t& state) {
	auto _method = ::pilot::PlatformInterface_set_relay::create();
	_method->channel = channel;
	_method->state = state;
	vnx_request(_method, true);
}

void PlatformInterfaceClient::set_digital_output(const int32_t& channel, const vnx::bool_t& state) {
	auto _method = ::pilot::PlatformInterface_set_digital_output::create();
	_method->channel = channel;
	_method->state = state;
	vnx_request(_method, false);
}

void PlatformInterfaceClient::set_digital_output_async(const int32_t& channel, const vnx::bool_t& state) {
	auto _method = ::pilot::PlatformInterface_set_digital_output::create();
	_method->channel = channel;
	_method->state = state;
	vnx_request(_method, true);
}

void PlatformInterfaceClient::set_display_text(const std::string& line) {
	auto _method = ::pilot::PlatformInterface_set_display_text::create();
	_method->line = line;
	vnx_request(_method, false);
}

void PlatformInterfaceClient::set_display_text_async(const std::string& line) {
	auto _method = ::pilot::PlatformInterface_set_display_text::create();
	_method->line = line;
	vnx_request(_method, true);
}

void PlatformInterfaceClient::set_led(const ::pilot::led_color_e& color, const vnx::float64_t& amount) {
	auto _method = ::pilot::PlatformInterface_set_led::create();
	_method->color = color;
	_method->amount = amount;
	vnx_request(_method, false);
}

void PlatformInterfaceClient::set_led_async(const ::pilot::led_color_e& color, const vnx::float64_t& amount) {
	auto _method = ::pilot::PlatformInterface_set_led::create();
	_method->color = color;
	_method->amount = amount;
	vnx_request(_method, true);
}

void PlatformInterfaceClient::set_leds(const std::map<::pilot::led_color_e, vnx::float64_t>& led_amount_map) {
	auto _method = ::pilot::PlatformInterface_set_leds::create();
	_method->led_amount_map = led_amount_map;
	vnx_request(_method, false);
}

void PlatformInterfaceClient::set_leds_async(const std::map<::pilot::led_color_e, vnx::float64_t>& led_amount_map) {
	auto _method = ::pilot::PlatformInterface_set_leds::create();
	_method->led_amount_map = led_amount_map;
	vnx_request(_method, true);
}

vnx::float32_t PlatformInterfaceClient::read_analog_input(const int32_t& channel) {
	auto _method = ::pilot::PlatformInterface_read_analog_input::create();
	_method->channel = channel;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::pilot::PlatformInterface_read_analog_input_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<vnx::float32_t>();
	} else {
		throw std::logic_error("PlatformInterfaceClient: invalid return value");
	}
}

vnx::bool_t PlatformInterfaceClient::read_digital_input(const int32_t& channel) {
	auto _method = ::pilot::PlatformInterface_read_digital_input::create();
	_method->channel = channel;
	auto _return_value = vnx_request(_method, false);
	if(auto _result = std::dynamic_pointer_cast<const ::pilot::PlatformInterface_read_digital_input_return>(_return_value)) {
		return _result->_ret_0;
	} else if(_return_value && !_return_value->is_void()) {
		return _return_value->get_field_by_index(0).to<vnx::bool_t>();
	} else {
		throw std::logic_error("PlatformInterfaceClient: invalid return value");
	}
}

void PlatformInterfaceClient::wait_for_digital_input(const int32_t& channel, const vnx::bool_t& state) {
	auto _method = ::pilot::PlatformInterface_wait_for_digital_input::create();
	_method->channel = channel;
	_method->state = state;
	vnx_request(_method, false);
}

void PlatformInterfaceClient::wait_for_digital_input_async(const int32_t& channel, const vnx::bool_t& state) {
	auto _method = ::pilot::PlatformInterface_wait_for_digital_input::create();
	_method->channel = channel;
	_method->state = state;
	vnx_request(_method, true);
}

void PlatformInterfaceClient::shutdown() {
	auto _method = ::pilot::PlatformInterface_shutdown::create();
	vnx_request(_method, false);
}

void PlatformInterfaceClient::shutdown_async() {
	auto _method = ::pilot::PlatformInterface_shutdown::create();
	vnx_request(_method, true);
}


} // namespace pilot