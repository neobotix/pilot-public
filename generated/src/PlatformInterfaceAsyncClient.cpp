
// AUTO GENERATED by vnxcppcodegen

#include <pilot/package.hxx>
#include <pilot/PlatformInterfaceAsyncClient.hxx>
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

PlatformInterfaceAsyncClient::PlatformInterfaceAsyncClient(const std::string& service_name)
	:	AsyncClient::AsyncClient(vnx::Hash64(service_name))
{
}

PlatformInterfaceAsyncClient::PlatformInterfaceAsyncClient(vnx::Hash64 service_addr)
	:	AsyncClient::AsyncClient(service_addr)
{
}

uint64_t PlatformInterfaceAsyncClient::charge(const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::pilot::PlatformInterface_charge::create();
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 0;
		vnx_queue_charge[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t PlatformInterfaceAsyncClient::start_charging(const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::pilot::PlatformInterface_start_charging::create();
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 1;
		vnx_queue_start_charging[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t PlatformInterfaceAsyncClient::stop_charging(const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::pilot::PlatformInterface_stop_charging::create();
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 2;
		vnx_queue_stop_charging[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t PlatformInterfaceAsyncClient::set_relay(const int32_t& channel, const vnx::bool_t& state, const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::pilot::PlatformInterface_set_relay::create();
	_method->channel = channel;
	_method->state = state;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 3;
		vnx_queue_set_relay[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t PlatformInterfaceAsyncClient::set_digital_output(const int32_t& channel, const vnx::bool_t& state, const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::pilot::PlatformInterface_set_digital_output::create();
	_method->channel = channel;
	_method->state = state;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 4;
		vnx_queue_set_digital_output[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t PlatformInterfaceAsyncClient::set_display_text(const std::string& line, const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::pilot::PlatformInterface_set_display_text::create();
	_method->line = line;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 5;
		vnx_queue_set_display_text[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t PlatformInterfaceAsyncClient::set_led(const ::pilot::led_color_e& color, const vnx::float64_t& amount, const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::pilot::PlatformInterface_set_led::create();
	_method->color = color;
	_method->amount = amount;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 6;
		vnx_queue_set_led[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t PlatformInterfaceAsyncClient::set_leds(const std::map<::pilot::led_color_e, vnx::float64_t>& led_amount_map, const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::pilot::PlatformInterface_set_leds::create();
	_method->led_amount_map = led_amount_map;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 7;
		vnx_queue_set_leds[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t PlatformInterfaceAsyncClient::read_analog_input(const int32_t& channel, const std::function<void(const vnx::float32_t&)>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::pilot::PlatformInterface_read_analog_input::create();
	_method->channel = channel;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 8;
		vnx_queue_read_analog_input[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t PlatformInterfaceAsyncClient::read_digital_input(const int32_t& channel, const std::function<void(const vnx::bool_t&)>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::pilot::PlatformInterface_read_digital_input::create();
	_method->channel = channel;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 9;
		vnx_queue_read_digital_input[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t PlatformInterfaceAsyncClient::wait_for_digital_input(const int32_t& channel, const vnx::bool_t& state, const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::pilot::PlatformInterface_wait_for_digital_input::create();
	_method->channel = channel;
	_method->state = state;
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 10;
		vnx_queue_wait_for_digital_input[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

uint64_t PlatformInterfaceAsyncClient::shutdown(const std::function<void()>& _callback, const std::function<void(const vnx::exception&)>& _error_callback) {
	auto _method = ::pilot::PlatformInterface_shutdown::create();
	const auto _request_id = ++vnx_next_id;
	{
		std::lock_guard<std::mutex> _lock(vnx_mutex);
		vnx_pending[_request_id] = 11;
		vnx_queue_shutdown[_request_id] = std::make_pair(_callback, _error_callback);
	}
	vnx_request(_method, _request_id);
	return _request_id;
}

int32_t PlatformInterfaceAsyncClient::vnx_purge_request(uint64_t _request_id, const vnx::exception& _ex) {
	std::unique_lock<std::mutex> _lock(vnx_mutex);
	const auto _iter = vnx_pending.find(_request_id);
	if(_iter == vnx_pending.end()) {
		return -1;
	}
	const auto _index = _iter->second;
	vnx_pending.erase(_iter);
	switch(_index) {
		case 0: {
			const auto _iter = vnx_queue_charge.find(_request_id);
			if(_iter != vnx_queue_charge.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_charge.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 1: {
			const auto _iter = vnx_queue_start_charging.find(_request_id);
			if(_iter != vnx_queue_start_charging.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_start_charging.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 2: {
			const auto _iter = vnx_queue_stop_charging.find(_request_id);
			if(_iter != vnx_queue_stop_charging.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_stop_charging.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 3: {
			const auto _iter = vnx_queue_set_relay.find(_request_id);
			if(_iter != vnx_queue_set_relay.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_set_relay.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 4: {
			const auto _iter = vnx_queue_set_digital_output.find(_request_id);
			if(_iter != vnx_queue_set_digital_output.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_set_digital_output.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 5: {
			const auto _iter = vnx_queue_set_display_text.find(_request_id);
			if(_iter != vnx_queue_set_display_text.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_set_display_text.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 6: {
			const auto _iter = vnx_queue_set_led.find(_request_id);
			if(_iter != vnx_queue_set_led.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_set_led.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 7: {
			const auto _iter = vnx_queue_set_leds.find(_request_id);
			if(_iter != vnx_queue_set_leds.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_set_leds.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 8: {
			const auto _iter = vnx_queue_read_analog_input.find(_request_id);
			if(_iter != vnx_queue_read_analog_input.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_read_analog_input.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 9: {
			const auto _iter = vnx_queue_read_digital_input.find(_request_id);
			if(_iter != vnx_queue_read_digital_input.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_read_digital_input.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 10: {
			const auto _iter = vnx_queue_wait_for_digital_input.find(_request_id);
			if(_iter != vnx_queue_wait_for_digital_input.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_wait_for_digital_input.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
		case 11: {
			const auto _iter = vnx_queue_shutdown.find(_request_id);
			if(_iter != vnx_queue_shutdown.end()) {
				const auto _callback = std::move(_iter->second.second);
				vnx_queue_shutdown.erase(_iter);
				_lock.unlock();
				if(_callback) {
					_callback(_ex);
				}
			}
			break;
		}
	}
	return _index;
}

int32_t PlatformInterfaceAsyncClient::vnx_callback_switch(uint64_t _request_id, std::shared_ptr<const vnx::Value> _value) {
	std::unique_lock<std::mutex> _lock(vnx_mutex);
	const auto _iter = vnx_pending.find(_request_id);
	if(_iter == vnx_pending.end()) {
		throw std::runtime_error("PlatformInterfaceAsyncClient: received unknown return");
	}
	const auto _index = _iter->second;
	vnx_pending.erase(_iter);
	switch(_index) {
		case 0: {
			const auto _iter = vnx_queue_charge.find(_request_id);
			if(_iter == vnx_queue_charge.end()) {
				throw std::runtime_error("PlatformInterfaceAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_charge.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 1: {
			const auto _iter = vnx_queue_start_charging.find(_request_id);
			if(_iter == vnx_queue_start_charging.end()) {
				throw std::runtime_error("PlatformInterfaceAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_start_charging.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 2: {
			const auto _iter = vnx_queue_stop_charging.find(_request_id);
			if(_iter == vnx_queue_stop_charging.end()) {
				throw std::runtime_error("PlatformInterfaceAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_stop_charging.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 3: {
			const auto _iter = vnx_queue_set_relay.find(_request_id);
			if(_iter == vnx_queue_set_relay.end()) {
				throw std::runtime_error("PlatformInterfaceAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_set_relay.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 4: {
			const auto _iter = vnx_queue_set_digital_output.find(_request_id);
			if(_iter == vnx_queue_set_digital_output.end()) {
				throw std::runtime_error("PlatformInterfaceAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_set_digital_output.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 5: {
			const auto _iter = vnx_queue_set_display_text.find(_request_id);
			if(_iter == vnx_queue_set_display_text.end()) {
				throw std::runtime_error("PlatformInterfaceAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_set_display_text.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 6: {
			const auto _iter = vnx_queue_set_led.find(_request_id);
			if(_iter == vnx_queue_set_led.end()) {
				throw std::runtime_error("PlatformInterfaceAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_set_led.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 7: {
			const auto _iter = vnx_queue_set_leds.find(_request_id);
			if(_iter == vnx_queue_set_leds.end()) {
				throw std::runtime_error("PlatformInterfaceAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_set_leds.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 8: {
			const auto _iter = vnx_queue_read_analog_input.find(_request_id);
			if(_iter == vnx_queue_read_analog_input.end()) {
				throw std::runtime_error("PlatformInterfaceAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_read_analog_input.erase(_iter);
			_lock.unlock();
			if(_callback) {
				if(auto _result = std::dynamic_pointer_cast<const ::pilot::PlatformInterface_read_analog_input_return>(_value)) {
					_callback(_result->_ret_0);
				} else if(_value && !_value->is_void()) {
					_callback(_value->get_field_by_index(0).to<vnx::float32_t>());
				} else {
					throw std::logic_error("PlatformInterfaceAsyncClient: invalid return value");
				}
			}
			break;
		}
		case 9: {
			const auto _iter = vnx_queue_read_digital_input.find(_request_id);
			if(_iter == vnx_queue_read_digital_input.end()) {
				throw std::runtime_error("PlatformInterfaceAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_read_digital_input.erase(_iter);
			_lock.unlock();
			if(_callback) {
				if(auto _result = std::dynamic_pointer_cast<const ::pilot::PlatformInterface_read_digital_input_return>(_value)) {
					_callback(_result->_ret_0);
				} else if(_value && !_value->is_void()) {
					_callback(_value->get_field_by_index(0).to<vnx::bool_t>());
				} else {
					throw std::logic_error("PlatformInterfaceAsyncClient: invalid return value");
				}
			}
			break;
		}
		case 10: {
			const auto _iter = vnx_queue_wait_for_digital_input.find(_request_id);
			if(_iter == vnx_queue_wait_for_digital_input.end()) {
				throw std::runtime_error("PlatformInterfaceAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_wait_for_digital_input.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		case 11: {
			const auto _iter = vnx_queue_shutdown.find(_request_id);
			if(_iter == vnx_queue_shutdown.end()) {
				throw std::runtime_error("PlatformInterfaceAsyncClient: callback not found");
			}
			const auto _callback = std::move(_iter->second.first);
			vnx_queue_shutdown.erase(_iter);
			_lock.unlock();
			if(_callback) {
				_callback();
			}
			break;
		}
		default:
			if(_index >= 0) {
				throw std::logic_error("PlatformInterfaceAsyncClient: invalid callback index");
			}
	}
	return _index;
}


} // namespace pilot