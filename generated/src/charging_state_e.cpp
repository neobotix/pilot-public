
// AUTO GENERATED by vnxcppcodegen

#include <pilot/package.hxx>
#include <pilot/charging_state_e.hxx>

#include <vnx/vnx.h>


namespace pilot {


const vnx::Hash64 charging_state_e::VNX_TYPE_HASH(0xff0a4aa333cf8b83ull);
const vnx::Hash64 charging_state_e::VNX_CODE_HASH(0xef3d2ad05d908b6bull);

vnx::Hash64 charging_state_e::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string charging_state_e::get_type_name() const {
	return "pilot.charging_state_e";
}

const vnx::TypeCode* charging_state_e::get_type_code() const {
	return pilot::vnx_native_type_code_charging_state_e;
}

std::shared_ptr<charging_state_e> charging_state_e::create() {
	return std::make_shared<charging_state_e>();
}

std::shared_ptr<charging_state_e> charging_state_e::clone() const {
	return std::make_shared<charging_state_e>(*this);
}

void charging_state_e::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void charging_state_e::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

vnx::bool_t charging_state_e::is_valid() const {
	switch(value) {
		case ABORTED: return true;
		case BRAKES_OPEN: return true;
		case EM_STOP: return true;
		case FINISHED: return true;
		case IS_CHARGING: return true;
		case NOT_CHARGING: return true;
		case NO_CHARGER: return true;
	}
	return false;
}

std::string charging_state_e::to_string() const {
	switch(value) {
		case ABORTED: return "\"ABORTED\"";
		case BRAKES_OPEN: return "\"BRAKES_OPEN\"";
		case EM_STOP: return "\"EM_STOP\"";
		case FINISHED: return "\"FINISHED\"";
		case IS_CHARGING: return "\"IS_CHARGING\"";
		case NOT_CHARGING: return "\"NOT_CHARGING\"";
		case NO_CHARGER: return "\"NO_CHARGER\"";
	}
	return std::to_string(value);
}

std::string charging_state_e::to_string_value() const {
	switch(value) {
		case ABORTED: return "ABORTED";
		case BRAKES_OPEN: return "BRAKES_OPEN";
		case EM_STOP: return "EM_STOP";
		case FINISHED: return "FINISHED";
		case IS_CHARGING: return "IS_CHARGING";
		case NOT_CHARGING: return "NOT_CHARGING";
		case NO_CHARGER: return "NO_CHARGER";
	}
	return std::to_string(value);
}

std::string charging_state_e::to_string_value_full() const {
	switch(value) {
		case ABORTED: return "pilot.charging_state_e.ABORTED";
		case BRAKES_OPEN: return "pilot.charging_state_e.BRAKES_OPEN";
		case EM_STOP: return "pilot.charging_state_e.EM_STOP";
		case FINISHED: return "pilot.charging_state_e.FINISHED";
		case IS_CHARGING: return "pilot.charging_state_e.IS_CHARGING";
		case NOT_CHARGING: return "pilot.charging_state_e.NOT_CHARGING";
		case NO_CHARGER: return "pilot.charging_state_e.NO_CHARGER";
	}
	return std::to_string(value);
}

void charging_state_e::from_string(const std::string& _str) {
	std::string _name;
	vnx::from_string(_str, _name);
	from_string_value(_name);
}

void charging_state_e::from_string_value(const std::string& _name) {
	vnx::Variant var;
	vnx::from_string_value(_name, var);
	if(var.is_string()) {
		if(_name == "ABORTED") value = ABORTED;
		else if(_name == "BRAKES_OPEN") value = BRAKES_OPEN;
		else if(_name == "EM_STOP") value = EM_STOP;
		else if(_name == "FINISHED") value = FINISHED;
		else if(_name == "IS_CHARGING") value = IS_CHARGING;
		else if(_name == "NOT_CHARGING") value = NOT_CHARGING;
		else if(_name == "NO_CHARGER") value = NO_CHARGER;
		else value = enum_t(vnx::hash64(_name));
	} else {
		value = enum_t(std::stoul(_name.c_str(), nullptr, 0));
	}
}

void charging_state_e::accept(vnx::Visitor& _visitor) const {
	std::string _name;
	switch(value) {
		case ABORTED: _name = "ABORTED"; break;
		case BRAKES_OPEN: _name = "BRAKES_OPEN"; break;
		case EM_STOP: _name = "EM_STOP"; break;
		case FINISHED: _name = "FINISHED"; break;
		case IS_CHARGING: _name = "IS_CHARGING"; break;
		case NOT_CHARGING: _name = "NOT_CHARGING"; break;
		case NO_CHARGER: _name = "NO_CHARGER"; break;
	}
	_visitor.enum_value(value, _name);
}

void charging_state_e::write(std::ostream& _out) const {
	switch(value) {
		case ABORTED: _out << "\"ABORTED\""; break;
		case BRAKES_OPEN: _out << "\"BRAKES_OPEN\""; break;
		case EM_STOP: _out << "\"EM_STOP\""; break;
		case FINISHED: _out << "\"FINISHED\""; break;
		case IS_CHARGING: _out << "\"IS_CHARGING\""; break;
		case NOT_CHARGING: _out << "\"NOT_CHARGING\""; break;
		case NO_CHARGER: _out << "\"NO_CHARGER\""; break;
		default: _out << value;
	}
}

void charging_state_e::read(std::istream& _in) {
	from_string_value(vnx::read(_in).to_string_value());
}

vnx::Object charging_state_e::to_object() const {
	vnx::Object _object;
	_object["__type"] = "pilot.charging_state_e";
	_object["value"] = value;
	return _object;
}

void charging_state_e::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "value") {
			_entry.second.to(value);
		}
	}
}

vnx::Variant charging_state_e::get_field(const std::string& _name) const {
	if(_name == "value") {
		return vnx::Variant(value);
	}
	return vnx::Variant();
}

void charging_state_e::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "value") {
		_value.to(value);
	} else {
		throw std::logic_error("no such field: '" + _name + "'");
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const charging_state_e& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, charging_state_e& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* charging_state_e::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> charging_state_e::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "pilot.charging_state_e";
	type_code->type_hash = vnx::Hash64(0xff0a4aa333cf8b83ull);
	type_code->code_hash = vnx::Hash64(0xef3d2ad05d908b6bull);
	type_code->is_native = true;
	type_code->is_enum = true;
	type_code->native_size = sizeof(::pilot::charging_state_e);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<vnx::Struct<charging_state_e>>(); };
	type_code->fields.resize(1);
	{
		auto& field = type_code->fields[0];
		field.data_size = 4;
		field.name = "value";
		field.code = {3};
	}
	type_code->enum_map[923729092] = "ABORTED";
	type_code->enum_map[2616656314] = "BRAKES_OPEN";
	type_code->enum_map[668456764] = "EM_STOP";
	type_code->enum_map[421351423] = "FINISHED";
	type_code->enum_map[1047359998] = "IS_CHARGING";
	type_code->enum_map[2737660238] = "NOT_CHARGING";
	type_code->enum_map[407853812] = "NO_CHARGER";
	type_code->build();
	return type_code;
}


} // namespace pilot


namespace vnx {

void read(TypeInput& in, ::pilot::charging_state_e& value, const TypeCode* type_code, const uint16_t* code) {
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
			value = ::pilot::charging_state_e::enum_t(tmp.to<uint32_t>());
		} else {
			value = ::pilot::charging_state_e();
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

void write(TypeOutput& out, const ::pilot::charging_state_e& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_STRING) {
		vnx::write(out, value.to_string_value(), nullptr, code);
		return;
	}
	if(code && code[0] == CODE_UINT32) {
		vnx::write(out, value.value, nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = pilot::vnx_native_type_code_charging_state_e;
		out.write_type_code(type_code);
		vnx::write_class_header<::pilot::charging_state_e>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(4);
	vnx::write_value(_buf + 0, value.value);
}

void read(std::istream& in, ::pilot::charging_state_e& value) {
	value.read(in);
}

void write(std::ostream& out, const ::pilot::charging_state_e& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::pilot::charging_state_e& value) {
	value.accept(visitor);
}

void read(TypeInput& in, ::pilot::charging_state_e::enum_t& value, const TypeCode* type_code, const uint16_t* code) {
	uint32_t tmp = 0;
	vnx::read(in, tmp, type_code, code);
	value = ::pilot::charging_state_e::enum_t(tmp);
}

void write(TypeOutput& out, const ::pilot::charging_state_e::enum_t& value, const TypeCode* type_code, const uint16_t* code) {
	vnx::write(out, uint32_t(value), type_code, code);
}

template<>
std::string to_string(const ::pilot::charging_state_e& _value) {
	return _value.to_string();
}

template<>
std::string to_string_value(const ::pilot::charging_state_e& _value) {
	return _value.to_string_value();
}

template<>
std::string to_string_value_full(const ::pilot::charging_state_e& _value) {
	return _value.to_string_value_full();
}

template<>
std::string to_string(const ::pilot::charging_state_e::enum_t& _value) {
	return ::pilot::charging_state_e(_value).to_string();
}

template<>
std::string to_string_value(const ::pilot::charging_state_e::enum_t& _value) {
	return ::pilot::charging_state_e(_value).to_string_value();
}

template<>
std::string to_string_value_full(const ::pilot::charging_state_e::enum_t& _value) {
	return ::pilot::charging_state_e(_value).to_string_value_full();
}

bool is_equivalent<::pilot::charging_state_e>::operator()(const uint16_t* code, const TypeCode* type_code) {
	if(code[0] != CODE_STRUCT || !type_code) {
		return false;
	}
	type_code = type_code->depends[code[1]];
	return type_code->type_hash == ::pilot::charging_state_e::VNX_TYPE_HASH && type_code->is_equivalent;
}

} // vnx
