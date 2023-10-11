
// AUTO GENERATED by vnxcppcodegen

#include <pilot/package.hxx>
#include <pilot/led_color_e.hxx>

#include <vnx/vnx.h>


namespace pilot {


const vnx::Hash64 led_color_e::VNX_TYPE_HASH(0x7b75c32561de076ull);
const vnx::Hash64 led_color_e::VNX_CODE_HASH(0x343cea635812c491ull);

vnx::Hash64 led_color_e::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string led_color_e::get_type_name() const {
	return "pilot.led_color_e";
}

const vnx::TypeCode* led_color_e::get_type_code() const {
	return pilot::vnx_native_type_code_led_color_e;
}

std::shared_ptr<led_color_e> led_color_e::create() {
	return std::make_shared<led_color_e>();
}

std::shared_ptr<led_color_e> led_color_e::clone() const {
	return std::make_shared<led_color_e>(*this);
}

void led_color_e::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void led_color_e::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

vnx::bool_t led_color_e::is_valid() const {
	switch(value) {
		case BLUE: return true;
		case GREEN: return true;
		case RED: return true;
		case WHITE: return true;
	}
	return false;
}

std::string led_color_e::to_string() const {
	switch(value) {
		case BLUE: return "\"BLUE\"";
		case GREEN: return "\"GREEN\"";
		case RED: return "\"RED\"";
		case WHITE: return "\"WHITE\"";
	}
	return std::to_string(value);
}

std::string led_color_e::to_string_value() const {
	switch(value) {
		case BLUE: return "BLUE";
		case GREEN: return "GREEN";
		case RED: return "RED";
		case WHITE: return "WHITE";
	}
	return std::to_string(value);
}

std::string led_color_e::to_string_value_full() const {
	switch(value) {
		case BLUE: return "pilot.led_color_e.BLUE";
		case GREEN: return "pilot.led_color_e.GREEN";
		case RED: return "pilot.led_color_e.RED";
		case WHITE: return "pilot.led_color_e.WHITE";
	}
	return std::to_string(value);
}

void led_color_e::from_string(const std::string& _str) {
	std::string _name;
	vnx::from_string(_str, _name);
	from_string_value(_name);
}

void led_color_e::from_string_value(const std::string& _name) {
	vnx::Variant var;
	vnx::from_string_value(_name, var);
	if(var.is_string()) {
		if(_name == "BLUE") value = BLUE;
		else if(_name == "GREEN") value = GREEN;
		else if(_name == "RED") value = RED;
		else if(_name == "WHITE") value = WHITE;
		else value = enum_t(vnx::hash64(_name));
	} else {
		value = enum_t(std::stoul(_name.c_str(), nullptr, 0));
	}
}

void led_color_e::accept(vnx::Visitor& _visitor) const {
	std::string _name;
	switch(value) {
		case BLUE: _name = "BLUE"; break;
		case GREEN: _name = "GREEN"; break;
		case RED: _name = "RED"; break;
		case WHITE: _name = "WHITE"; break;
	}
	_visitor.enum_value(value, _name);
}

void led_color_e::write(std::ostream& _out) const {
	switch(value) {
		case BLUE: _out << "\"BLUE\""; break;
		case GREEN: _out << "\"GREEN\""; break;
		case RED: _out << "\"RED\""; break;
		case WHITE: _out << "\"WHITE\""; break;
		default: _out << value;
	}
}

void led_color_e::read(std::istream& _in) {
	from_string_value(vnx::read(_in).to_string_value());
}

vnx::Object led_color_e::to_object() const {
	vnx::Object _object;
	_object["__type"] = "pilot.led_color_e";
	_object["value"] = value;
	return _object;
}

void led_color_e::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "value") {
			_entry.second.to(value);
		}
	}
}

vnx::Variant led_color_e::get_field(const std::string& _name) const {
	if(_name == "value") {
		return vnx::Variant(value);
	}
	return vnx::Variant();
}

void led_color_e::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "value") {
		_value.to(value);
	} else {
		throw std::logic_error("no such field: '" + _name + "'");
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const led_color_e& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, led_color_e& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* led_color_e::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> led_color_e::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "pilot.led_color_e";
	type_code->type_hash = vnx::Hash64(0x7b75c32561de076ull);
	type_code->code_hash = vnx::Hash64(0x343cea635812c491ull);
	type_code->is_native = true;
	type_code->is_enum = true;
	type_code->native_size = sizeof(::pilot::led_color_e);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<vnx::Struct<led_color_e>>(); };
	type_code->fields.resize(1);
	{
		auto& field = type_code->fields[0];
		field.data_size = 4;
		field.name = "value";
		field.code = {3};
	}
	type_code->enum_map[3685684934] = "BLUE";
	type_code->enum_map[3557798943] = "GREEN";
	type_code->enum_map[1312618398] = "RED";
	type_code->enum_map[2489817756] = "WHITE";
	type_code->build();
	return type_code;
}


} // namespace pilot


namespace vnx {

void read(TypeInput& in, ::pilot::led_color_e& value, const TypeCode* type_code, const uint16_t* code) {
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
			value = ::pilot::led_color_e::enum_t(tmp.to<uint32_t>());
		} else {
			value = ::pilot::led_color_e();
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

void write(TypeOutput& out, const ::pilot::led_color_e& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_STRING) {
		vnx::write(out, value.to_string_value(), nullptr, code);
		return;
	}
	if(code && code[0] == CODE_UINT32) {
		vnx::write(out, value.value, nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = pilot::vnx_native_type_code_led_color_e;
		out.write_type_code(type_code);
		vnx::write_class_header<::pilot::led_color_e>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(4);
	vnx::write_value(_buf + 0, value.value);
}

void read(std::istream& in, ::pilot::led_color_e& value) {
	value.read(in);
}

void write(std::ostream& out, const ::pilot::led_color_e& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::pilot::led_color_e& value) {
	value.accept(visitor);
}

void read(TypeInput& in, ::pilot::led_color_e::enum_t& value, const TypeCode* type_code, const uint16_t* code) {
	uint32_t tmp = 0;
	vnx::read(in, tmp, type_code, code);
	value = ::pilot::led_color_e::enum_t(tmp);
}

void write(TypeOutput& out, const ::pilot::led_color_e::enum_t& value, const TypeCode* type_code, const uint16_t* code) {
	vnx::write(out, uint32_t(value), type_code, code);
}

template<>
std::string to_string(const ::pilot::led_color_e& _value) {
	return _value.to_string();
}

template<>
std::string to_string_value(const ::pilot::led_color_e& _value) {
	return _value.to_string_value();
}

template<>
std::string to_string_value_full(const ::pilot::led_color_e& _value) {
	return _value.to_string_value_full();
}

template<>
std::string to_string(const ::pilot::led_color_e::enum_t& _value) {
	return ::pilot::led_color_e(_value).to_string();
}

template<>
std::string to_string_value(const ::pilot::led_color_e::enum_t& _value) {
	return ::pilot::led_color_e(_value).to_string_value();
}

template<>
std::string to_string_value_full(const ::pilot::led_color_e::enum_t& _value) {
	return ::pilot::led_color_e(_value).to_string_value_full();
}

bool is_equivalent<::pilot::led_color_e>::operator()(const uint16_t* code, const TypeCode* type_code) {
	if(code[0] != CODE_STRUCT || !type_code) {
		return false;
	}
	type_code = type_code->depends[code[1]];
	return type_code->type_hash == ::pilot::led_color_e::VNX_TYPE_HASH && type_code->is_equivalent;
}

} // vnx
