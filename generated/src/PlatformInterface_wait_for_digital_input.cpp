
// AUTO GENERATED by vnxcppcodegen

#include <pilot/package.hxx>
#include <pilot/PlatformInterface_wait_for_digital_input.hxx>
#include <pilot/PlatformInterface_wait_for_digital_input_return.hxx>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace pilot {


const vnx::Hash64 PlatformInterface_wait_for_digital_input::VNX_TYPE_HASH(0xe5a564f1d0ad3154ull);
const vnx::Hash64 PlatformInterface_wait_for_digital_input::VNX_CODE_HASH(0x448d57001460f5bfull);

vnx::Hash64 PlatformInterface_wait_for_digital_input::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string PlatformInterface_wait_for_digital_input::get_type_name() const {
	return "pilot.PlatformInterface.wait_for_digital_input";
}

const vnx::TypeCode* PlatformInterface_wait_for_digital_input::get_type_code() const {
	return pilot::vnx_native_type_code_PlatformInterface_wait_for_digital_input;
}

std::shared_ptr<PlatformInterface_wait_for_digital_input> PlatformInterface_wait_for_digital_input::create() {
	return std::make_shared<PlatformInterface_wait_for_digital_input>();
}

std::shared_ptr<vnx::Value> PlatformInterface_wait_for_digital_input::clone() const {
	return std::make_shared<PlatformInterface_wait_for_digital_input>(*this);
}

void PlatformInterface_wait_for_digital_input::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void PlatformInterface_wait_for_digital_input::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void PlatformInterface_wait_for_digital_input::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = pilot::vnx_native_type_code_PlatformInterface_wait_for_digital_input;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, channel);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, state);
	_visitor.type_end(*_type_code);
}

void PlatformInterface_wait_for_digital_input::write(std::ostream& _out) const {
	_out << "{\"__type\": \"pilot.PlatformInterface.wait_for_digital_input\"";
	_out << ", \"channel\": "; vnx::write(_out, channel);
	_out << ", \"state\": "; vnx::write(_out, state);
	_out << "}";
}

void PlatformInterface_wait_for_digital_input::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object PlatformInterface_wait_for_digital_input::to_object() const {
	vnx::Object _object;
	_object["__type"] = "pilot.PlatformInterface.wait_for_digital_input";
	_object["channel"] = channel;
	_object["state"] = state;
	return _object;
}

void PlatformInterface_wait_for_digital_input::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "channel") {
			_entry.second.to(channel);
		} else if(_entry.first == "state") {
			_entry.second.to(state);
		}
	}
}

vnx::Variant PlatformInterface_wait_for_digital_input::get_field(const std::string& _name) const {
	if(_name == "channel") {
		return vnx::Variant(channel);
	}
	if(_name == "state") {
		return vnx::Variant(state);
	}
	return vnx::Variant();
}

void PlatformInterface_wait_for_digital_input::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "channel") {
		_value.to(channel);
	} else if(_name == "state") {
		_value.to(state);
	} else {
		throw std::logic_error("no such field: '" + _name + "'");
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const PlatformInterface_wait_for_digital_input& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, PlatformInterface_wait_for_digital_input& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* PlatformInterface_wait_for_digital_input::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> PlatformInterface_wait_for_digital_input::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "pilot.PlatformInterface.wait_for_digital_input";
	type_code->type_hash = vnx::Hash64(0xe5a564f1d0ad3154ull);
	type_code->code_hash = vnx::Hash64(0x448d57001460f5bfull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->is_method = true;
	type_code->native_size = sizeof(::pilot::PlatformInterface_wait_for_digital_input);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<PlatformInterface_wait_for_digital_input>(); };
	type_code->is_const = true;
	type_code->is_async = true;
	type_code->return_type = ::pilot::PlatformInterface_wait_for_digital_input_return::static_get_type_code();
	type_code->fields.resize(2);
	{
		auto& field = type_code->fields[0];
		field.data_size = 4;
		field.name = "channel";
		field.code = {7};
	}
	{
		auto& field = type_code->fields[1];
		field.data_size = 1;
		field.name = "state";
		field.code = {31};
	}
	type_code->build();
	return type_code;
}


} // namespace pilot


namespace vnx {

void read(TypeInput& in, ::pilot::PlatformInterface_wait_for_digital_input& value, const TypeCode* type_code, const uint16_t* code) {
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
			vnx::read_value(_buf + _field->offset, value.channel, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[1]) {
			vnx::read_value(_buf + _field->offset, value.state, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::pilot::PlatformInterface_wait_for_digital_input& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = pilot::vnx_native_type_code_PlatformInterface_wait_for_digital_input;
		out.write_type_code(type_code);
		vnx::write_class_header<::pilot::PlatformInterface_wait_for_digital_input>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(5);
	vnx::write_value(_buf + 0, value.channel);
	vnx::write_value(_buf + 4, value.state);
}

void read(std::istream& in, ::pilot::PlatformInterface_wait_for_digital_input& value) {
	value.read(in);
}

void write(std::ostream& out, const ::pilot::PlatformInterface_wait_for_digital_input& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::pilot::PlatformInterface_wait_for_digital_input& value) {
	value.accept(visitor);
}

} // vnx
