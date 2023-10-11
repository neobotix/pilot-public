
// AUTO GENERATED by vnxcppcodegen

#include <pilot/package.hxx>
#include <pilot/SystemState.hxx>
#include <pilot/system_error_e.hxx>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace pilot {


const vnx::Hash64 SystemState::VNX_TYPE_HASH(0x6581fb0fdb31ddaeull);
const vnx::Hash64 SystemState::VNX_CODE_HASH(0xf7c9132c37382725ull);

vnx::Hash64 SystemState::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string SystemState::get_type_name() const {
	return "pilot.SystemState";
}

const vnx::TypeCode* SystemState::get_type_code() const {
	return pilot::vnx_native_type_code_SystemState;
}

std::shared_ptr<SystemState> SystemState::create() {
	return std::make_shared<SystemState>();
}

std::shared_ptr<vnx::Value> SystemState::clone() const {
	return std::make_shared<SystemState>(*this);
}

void SystemState::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void SystemState::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void SystemState::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = pilot::vnx_native_type_code_SystemState;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, time);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, system_errors);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, is_shutdown);
	_visitor.type_field(_type_code->fields[3], 3); vnx::accept(_visitor, is_initialized);
	_visitor.type_end(*_type_code);
}

void SystemState::write(std::ostream& _out) const {
	_out << "{\"__type\": \"pilot.SystemState\"";
	_out << ", \"time\": "; vnx::write(_out, time);
	_out << ", \"system_errors\": "; vnx::write(_out, system_errors);
	_out << ", \"is_shutdown\": "; vnx::write(_out, is_shutdown);
	_out << ", \"is_initialized\": "; vnx::write(_out, is_initialized);
	_out << "}";
}

void SystemState::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object SystemState::to_object() const {
	vnx::Object _object;
	_object["__type"] = "pilot.SystemState";
	_object["time"] = time;
	_object["system_errors"] = system_errors;
	_object["is_shutdown"] = is_shutdown;
	_object["is_initialized"] = is_initialized;
	return _object;
}

void SystemState::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "is_initialized") {
			_entry.second.to(is_initialized);
		} else if(_entry.first == "is_shutdown") {
			_entry.second.to(is_shutdown);
		} else if(_entry.first == "system_errors") {
			_entry.second.to(system_errors);
		} else if(_entry.first == "time") {
			_entry.second.to(time);
		}
	}
}

vnx::Variant SystemState::get_field(const std::string& _name) const {
	if(_name == "time") {
		return vnx::Variant(time);
	}
	if(_name == "system_errors") {
		return vnx::Variant(system_errors);
	}
	if(_name == "is_shutdown") {
		return vnx::Variant(is_shutdown);
	}
	if(_name == "is_initialized") {
		return vnx::Variant(is_initialized);
	}
	return vnx::Variant();
}

void SystemState::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "time") {
		_value.to(time);
	} else if(_name == "system_errors") {
		_value.to(system_errors);
	} else if(_name == "is_shutdown") {
		_value.to(is_shutdown);
	} else if(_name == "is_initialized") {
		_value.to(is_initialized);
	} else {
		throw std::logic_error("no such field: '" + _name + "'");
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const SystemState& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, SystemState& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* SystemState::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> SystemState::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "pilot.SystemState";
	type_code->type_hash = vnx::Hash64(0x6581fb0fdb31ddaeull);
	type_code->code_hash = vnx::Hash64(0xf7c9132c37382725ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->native_size = sizeof(::pilot::SystemState);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<SystemState>(); };
	type_code->depends.resize(1);
	type_code->depends[0] = ::pilot::system_error_e::static_get_type_code();
	type_code->fields.resize(4);
	{
		auto& field = type_code->fields[0];
		field.data_size = 8;
		field.name = "time";
		field.code = {8};
	}
	{
		auto& field = type_code->fields[1];
		field.is_extended = true;
		field.name = "system_errors";
		field.code = {12, 19, 0};
	}
	{
		auto& field = type_code->fields[2];
		field.data_size = 1;
		field.name = "is_shutdown";
		field.code = {31};
	}
	{
		auto& field = type_code->fields[3];
		field.data_size = 1;
		field.name = "is_initialized";
		field.code = {31};
	}
	type_code->build();
	return type_code;
}


} // namespace pilot


namespace vnx {

void read(TypeInput& in, ::pilot::SystemState& value, const TypeCode* type_code, const uint16_t* code) {
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
		vnx::skip(in, type_code, code);
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
			vnx::read_value(_buf + _field->offset, value.time, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[2]) {
			vnx::read_value(_buf + _field->offset, value.is_shutdown, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[3]) {
			vnx::read_value(_buf + _field->offset, value.is_initialized, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 1: vnx::read(in, value.system_errors, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::pilot::SystemState& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = pilot::vnx_native_type_code_SystemState;
		out.write_type_code(type_code);
		vnx::write_class_header<::pilot::SystemState>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(10);
	vnx::write_value(_buf + 0, value.time);
	vnx::write_value(_buf + 8, value.is_shutdown);
	vnx::write_value(_buf + 9, value.is_initialized);
	vnx::write(out, value.system_errors, type_code, type_code->fields[1].code.data());
}

void read(std::istream& in, ::pilot::SystemState& value) {
	value.read(in);
}

void write(std::ostream& out, const ::pilot::SystemState& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::pilot::SystemState& value) {
	value.accept(visitor);
}

} // vnx