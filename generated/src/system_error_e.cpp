
// AUTO GENERATED by vnxcppcodegen

#include <pilot/package.hxx>
#include <pilot/system_error_e.hxx>

#include <vnx/vnx.h>


namespace pilot {


const vnx::Hash64 system_error_e::VNX_TYPE_HASH(0x5c6737d8cdf39bfbull);
const vnx::Hash64 system_error_e::VNX_CODE_HASH(0xb9715ad6e4ceb45aull);

vnx::Hash64 system_error_e::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string system_error_e::get_type_name() const {
	return "pilot.system_error_e";
}

const vnx::TypeCode* system_error_e::get_type_code() const {
	return pilot::vnx_native_type_code_system_error_e;
}

std::shared_ptr<system_error_e> system_error_e::create() {
	return std::make_shared<system_error_e>();
}

std::shared_ptr<system_error_e> system_error_e::clone() const {
	return std::make_shared<system_error_e>(*this);
}

void system_error_e::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void system_error_e::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

vnx::bool_t system_error_e::is_valid() const {
	switch(value) {
		case BRAKE_RELEASE_BUTTON_ERROR: return true;
		case CHARGING_RELAY_ERROR: return true;
		case COMMUNICATION_ERROR: return true;
		case EDM_ERROR: return true;
		case EM_STOP_SYSTEM_ERROR: return true;
		case MAXIMUM_VELOCITY: return true;
		case MODE_SELECT_ERROR: return true;
		case MOTOR_ERROR: return true;
		case POWER_RELAY_ERROR: return true;
		case SAFETY_RELAY_ERROR: return true;
		case STANDSTILL_VIOLATION: return true;
	}
	return false;
}

std::string system_error_e::to_string() const {
	switch(value) {
		case BRAKE_RELEASE_BUTTON_ERROR: return "\"BRAKE_RELEASE_BUTTON_ERROR\"";
		case CHARGING_RELAY_ERROR: return "\"CHARGING_RELAY_ERROR\"";
		case COMMUNICATION_ERROR: return "\"COMMUNICATION_ERROR\"";
		case EDM_ERROR: return "\"EDM_ERROR\"";
		case EM_STOP_SYSTEM_ERROR: return "\"EM_STOP_SYSTEM_ERROR\"";
		case MAXIMUM_VELOCITY: return "\"MAXIMUM_VELOCITY\"";
		case MODE_SELECT_ERROR: return "\"MODE_SELECT_ERROR\"";
		case MOTOR_ERROR: return "\"MOTOR_ERROR\"";
		case POWER_RELAY_ERROR: return "\"POWER_RELAY_ERROR\"";
		case SAFETY_RELAY_ERROR: return "\"SAFETY_RELAY_ERROR\"";
		case STANDSTILL_VIOLATION: return "\"STANDSTILL_VIOLATION\"";
	}
	return std::to_string(value);
}

std::string system_error_e::to_string_value() const {
	switch(value) {
		case BRAKE_RELEASE_BUTTON_ERROR: return "BRAKE_RELEASE_BUTTON_ERROR";
		case CHARGING_RELAY_ERROR: return "CHARGING_RELAY_ERROR";
		case COMMUNICATION_ERROR: return "COMMUNICATION_ERROR";
		case EDM_ERROR: return "EDM_ERROR";
		case EM_STOP_SYSTEM_ERROR: return "EM_STOP_SYSTEM_ERROR";
		case MAXIMUM_VELOCITY: return "MAXIMUM_VELOCITY";
		case MODE_SELECT_ERROR: return "MODE_SELECT_ERROR";
		case MOTOR_ERROR: return "MOTOR_ERROR";
		case POWER_RELAY_ERROR: return "POWER_RELAY_ERROR";
		case SAFETY_RELAY_ERROR: return "SAFETY_RELAY_ERROR";
		case STANDSTILL_VIOLATION: return "STANDSTILL_VIOLATION";
	}
	return std::to_string(value);
}

std::string system_error_e::to_string_value_full() const {
	switch(value) {
		case BRAKE_RELEASE_BUTTON_ERROR: return "pilot.system_error_e.BRAKE_RELEASE_BUTTON_ERROR";
		case CHARGING_RELAY_ERROR: return "pilot.system_error_e.CHARGING_RELAY_ERROR";
		case COMMUNICATION_ERROR: return "pilot.system_error_e.COMMUNICATION_ERROR";
		case EDM_ERROR: return "pilot.system_error_e.EDM_ERROR";
		case EM_STOP_SYSTEM_ERROR: return "pilot.system_error_e.EM_STOP_SYSTEM_ERROR";
		case MAXIMUM_VELOCITY: return "pilot.system_error_e.MAXIMUM_VELOCITY";
		case MODE_SELECT_ERROR: return "pilot.system_error_e.MODE_SELECT_ERROR";
		case MOTOR_ERROR: return "pilot.system_error_e.MOTOR_ERROR";
		case POWER_RELAY_ERROR: return "pilot.system_error_e.POWER_RELAY_ERROR";
		case SAFETY_RELAY_ERROR: return "pilot.system_error_e.SAFETY_RELAY_ERROR";
		case STANDSTILL_VIOLATION: return "pilot.system_error_e.STANDSTILL_VIOLATION";
	}
	return std::to_string(value);
}

void system_error_e::from_string(const std::string& _str) {
	std::string _name;
	vnx::from_string(_str, _name);
	from_string_value(_name);
}

void system_error_e::from_string_value(const std::string& _name) {
	vnx::Variant var;
	vnx::from_string_value(_name, var);
	if(var.is_string()) {
		if(_name == "BRAKE_RELEASE_BUTTON_ERROR") value = BRAKE_RELEASE_BUTTON_ERROR;
		else if(_name == "CHARGING_RELAY_ERROR") value = CHARGING_RELAY_ERROR;
		else if(_name == "COMMUNICATION_ERROR") value = COMMUNICATION_ERROR;
		else if(_name == "EDM_ERROR") value = EDM_ERROR;
		else if(_name == "EM_STOP_SYSTEM_ERROR") value = EM_STOP_SYSTEM_ERROR;
		else if(_name == "MAXIMUM_VELOCITY") value = MAXIMUM_VELOCITY;
		else if(_name == "MODE_SELECT_ERROR") value = MODE_SELECT_ERROR;
		else if(_name == "MOTOR_ERROR") value = MOTOR_ERROR;
		else if(_name == "POWER_RELAY_ERROR") value = POWER_RELAY_ERROR;
		else if(_name == "SAFETY_RELAY_ERROR") value = SAFETY_RELAY_ERROR;
		else if(_name == "STANDSTILL_VIOLATION") value = STANDSTILL_VIOLATION;
		else value = enum_t(vnx::hash64(_name));
	} else {
		value = enum_t(std::stoul(_name.c_str(), nullptr, 0));
	}
}

void system_error_e::accept(vnx::Visitor& _visitor) const {
	std::string _name;
	switch(value) {
		case BRAKE_RELEASE_BUTTON_ERROR: _name = "BRAKE_RELEASE_BUTTON_ERROR"; break;
		case CHARGING_RELAY_ERROR: _name = "CHARGING_RELAY_ERROR"; break;
		case COMMUNICATION_ERROR: _name = "COMMUNICATION_ERROR"; break;
		case EDM_ERROR: _name = "EDM_ERROR"; break;
		case EM_STOP_SYSTEM_ERROR: _name = "EM_STOP_SYSTEM_ERROR"; break;
		case MAXIMUM_VELOCITY: _name = "MAXIMUM_VELOCITY"; break;
		case MODE_SELECT_ERROR: _name = "MODE_SELECT_ERROR"; break;
		case MOTOR_ERROR: _name = "MOTOR_ERROR"; break;
		case POWER_RELAY_ERROR: _name = "POWER_RELAY_ERROR"; break;
		case SAFETY_RELAY_ERROR: _name = "SAFETY_RELAY_ERROR"; break;
		case STANDSTILL_VIOLATION: _name = "STANDSTILL_VIOLATION"; break;
	}
	_visitor.enum_value(value, _name);
}

void system_error_e::write(std::ostream& _out) const {
	switch(value) {
		case BRAKE_RELEASE_BUTTON_ERROR: _out << "\"BRAKE_RELEASE_BUTTON_ERROR\""; break;
		case CHARGING_RELAY_ERROR: _out << "\"CHARGING_RELAY_ERROR\""; break;
		case COMMUNICATION_ERROR: _out << "\"COMMUNICATION_ERROR\""; break;
		case EDM_ERROR: _out << "\"EDM_ERROR\""; break;
		case EM_STOP_SYSTEM_ERROR: _out << "\"EM_STOP_SYSTEM_ERROR\""; break;
		case MAXIMUM_VELOCITY: _out << "\"MAXIMUM_VELOCITY\""; break;
		case MODE_SELECT_ERROR: _out << "\"MODE_SELECT_ERROR\""; break;
		case MOTOR_ERROR: _out << "\"MOTOR_ERROR\""; break;
		case POWER_RELAY_ERROR: _out << "\"POWER_RELAY_ERROR\""; break;
		case SAFETY_RELAY_ERROR: _out << "\"SAFETY_RELAY_ERROR\""; break;
		case STANDSTILL_VIOLATION: _out << "\"STANDSTILL_VIOLATION\""; break;
		default: _out << value;
	}
}

void system_error_e::read(std::istream& _in) {
	from_string_value(vnx::read(_in).to_string_value());
}

vnx::Object system_error_e::to_object() const {
	vnx::Object _object;
	_object["__type"] = "pilot.system_error_e";
	_object["value"] = value;
	return _object;
}

void system_error_e::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "value") {
			_entry.second.to(value);
		}
	}
}

vnx::Variant system_error_e::get_field(const std::string& _name) const {
	if(_name == "value") {
		return vnx::Variant(value);
	}
	return vnx::Variant();
}

void system_error_e::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "value") {
		_value.to(value);
	} else {
		throw std::logic_error("no such field: '" + _name + "'");
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const system_error_e& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, system_error_e& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* system_error_e::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> system_error_e::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "pilot.system_error_e";
	type_code->type_hash = vnx::Hash64(0x5c6737d8cdf39bfbull);
	type_code->code_hash = vnx::Hash64(0xb9715ad6e4ceb45aull);
	type_code->is_native = true;
	type_code->is_enum = true;
	type_code->native_size = sizeof(::pilot::system_error_e);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<vnx::Struct<system_error_e>>(); };
	type_code->fields.resize(1);
	{
		auto& field = type_code->fields[0];
		field.data_size = 4;
		field.name = "value";
		field.code = {3};
	}
	type_code->enum_map[300443180] = "BRAKE_RELEASE_BUTTON_ERROR";
	type_code->enum_map[408357403] = "CHARGING_RELAY_ERROR";
	type_code->enum_map[2547191405] = "COMMUNICATION_ERROR";
	type_code->enum_map[3138825320] = "EDM_ERROR";
	type_code->enum_map[4128739242] = "EM_STOP_SYSTEM_ERROR";
	type_code->enum_map[616060689] = "MAXIMUM_VELOCITY";
	type_code->enum_map[1768620763] = "MODE_SELECT_ERROR";
	type_code->enum_map[1076149855] = "MOTOR_ERROR";
	type_code->enum_map[3673071187] = "POWER_RELAY_ERROR";
	type_code->enum_map[3616417200] = "SAFETY_RELAY_ERROR";
	type_code->enum_map[612537943] = "STANDSTILL_VIOLATION";
	type_code->build();
	return type_code;
}


} // namespace pilot


namespace vnx {

void read(TypeInput& in, ::pilot::system_error_e& value, const TypeCode* type_code, const uint16_t* code) {
	if(code) {
		switch(code[0]) {
			case CODE_OBJECT:
			case CODE_ALT_OBJECT: {
				Object tmp;
				vnx::read(in, tmp, type_code, code);
				value.from_object(tmp);
				return;
			}
			case CODE_DYNAMIC:
			case CODE_ALT_DYNAMIC:
				vnx::read_dynamic(in, value);
				return;
		}
	}
	if(!type_code) {
		Variant tmp;
		vnx::read(in, tmp, type_code, code);
		if(tmp.is_string()) {
			vnx::from_string(tmp.to_string(), value);
		} else if(tmp.is_ulong()) {
			value = ::pilot::system_error_e::enum_t(tmp.to<uint32_t>());
		} else {
			value = ::pilot::system_error_e();
		}
		return;
	}
	if(code) {
		switch(code[0]) {
			case CODE_STRUCT: type_code = type_code->depends[code[1]]; break;
			case CODE_ALT_STRUCT: type_code = type_code->depends[vnx::flip_bytes(code[1])]; break;
			default: {
				vnx::skip(in, type_code, code);
				return;
			}
		}
	}
	const char* const _buf = in.read(type_code->total_field_size);
	if(type_code->is_matched) {
		if(const auto* const _field = type_code->field_map[0]) {
			vnx::read_value(_buf + _field->offset, value.value, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::pilot::system_error_e& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_STRING) {
		vnx::write(out, value.to_string_value(), nullptr, code);
		return;
	}
	if(code && code[0] == CODE_UINT32) {
		vnx::write(out, value.value, nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = pilot::vnx_native_type_code_system_error_e;
		out.write_type_code(type_code);
		vnx::write_class_header<::pilot::system_error_e>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(4);
	vnx::write_value(_buf + 0, value.value);
}

void read(std::istream& in, ::pilot::system_error_e& value) {
	value.read(in);
}

void write(std::ostream& out, const ::pilot::system_error_e& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::pilot::system_error_e& value) {
	value.accept(visitor);
}

void read(TypeInput& in, ::pilot::system_error_e::enum_t& value, const TypeCode* type_code, const uint16_t* code) {
	uint32_t tmp = 0;
	vnx::read(in, tmp, type_code, code);
	value = ::pilot::system_error_e::enum_t(tmp);
}

void write(TypeOutput& out, const ::pilot::system_error_e::enum_t& value, const TypeCode* type_code, const uint16_t* code) {
	vnx::write(out, uint32_t(value), type_code, code);
}

template<>
std::string to_string(const ::pilot::system_error_e& _value) {
	return _value.to_string();
}

template<>
std::string to_string_value(const ::pilot::system_error_e& _value) {
	return _value.to_string_value();
}

template<>
std::string to_string_value_full(const ::pilot::system_error_e& _value) {
	return _value.to_string_value_full();
}

template<>
std::string to_string(const ::pilot::system_error_e::enum_t& _value) {
	return ::pilot::system_error_e(_value).to_string();
}

template<>
std::string to_string_value(const ::pilot::system_error_e::enum_t& _value) {
	return ::pilot::system_error_e(_value).to_string_value();
}

template<>
std::string to_string_value_full(const ::pilot::system_error_e::enum_t& _value) {
	return ::pilot::system_error_e(_value).to_string_value_full();
}

bool is_equivalent<::pilot::system_error_e>::operator()(const uint16_t* code, const TypeCode* type_code) {
	if(code[0] != CODE_STRUCT || !type_code) {
		return false;
	}
	type_code = type_code->depends[code[1]];
	return type_code->type_hash == ::pilot::system_error_e::VNX_TYPE_HASH && type_code->is_equivalent;
}

} // vnx