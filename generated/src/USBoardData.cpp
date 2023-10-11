
// AUTO GENERATED by vnxcppcodegen

#include <pilot/package.hxx>
#include <pilot/USBoardData.hxx>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace pilot {


const vnx::Hash64 USBoardData::VNX_TYPE_HASH(0x4850604e2930c0a0ull);
const vnx::Hash64 USBoardData::VNX_CODE_HASH(0x913249d6abf60fdbull);

vnx::Hash64 USBoardData::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string USBoardData::get_type_name() const {
	return "pilot.USBoardData";
}

const vnx::TypeCode* USBoardData::get_type_code() const {
	return pilot::vnx_native_type_code_USBoardData;
}

std::shared_ptr<USBoardData> USBoardData::create() {
	return std::make_shared<USBoardData>();
}

std::shared_ptr<vnx::Value> USBoardData::clone() const {
	return std::make_shared<USBoardData>(*this);
}

void USBoardData::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void USBoardData::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void USBoardData::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = pilot::vnx_native_type_code_USBoardData;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, time);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, sensor);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, analog_input);
	_visitor.type_field(_type_code->fields[3], 3); vnx::accept(_visitor, analog_input_scale);
	_visitor.type_end(*_type_code);
}

void USBoardData::write(std::ostream& _out) const {
	_out << "{\"__type\": \"pilot.USBoardData\"";
	_out << ", \"time\": "; vnx::write(_out, time);
	_out << ", \"sensor\": "; vnx::write(_out, sensor);
	_out << ", \"analog_input\": "; vnx::write(_out, analog_input);
	_out << ", \"analog_input_scale\": "; vnx::write(_out, analog_input_scale);
	_out << "}";
}

void USBoardData::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object USBoardData::to_object() const {
	vnx::Object _object;
	_object["__type"] = "pilot.USBoardData";
	_object["time"] = time;
	_object["sensor"] = sensor;
	_object["analog_input"] = analog_input;
	_object["analog_input_scale"] = analog_input_scale;
	return _object;
}

void USBoardData::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "analog_input") {
			_entry.second.to(analog_input);
		} else if(_entry.first == "analog_input_scale") {
			_entry.second.to(analog_input_scale);
		} else if(_entry.first == "sensor") {
			_entry.second.to(sensor);
		} else if(_entry.first == "time") {
			_entry.second.to(time);
		}
	}
}

vnx::Variant USBoardData::get_field(const std::string& _name) const {
	if(_name == "time") {
		return vnx::Variant(time);
	}
	if(_name == "sensor") {
		return vnx::Variant(sensor);
	}
	if(_name == "analog_input") {
		return vnx::Variant(analog_input);
	}
	if(_name == "analog_input_scale") {
		return vnx::Variant(analog_input_scale);
	}
	return vnx::Variant();
}

void USBoardData::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "time") {
		_value.to(time);
	} else if(_name == "sensor") {
		_value.to(sensor);
	} else if(_name == "analog_input") {
		_value.to(analog_input);
	} else if(_name == "analog_input_scale") {
		_value.to(analog_input_scale);
	} else {
		throw std::logic_error("no such field: '" + _name + "'");
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const USBoardData& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, USBoardData& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* USBoardData::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> USBoardData::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "pilot.USBoardData";
	type_code->type_hash = vnx::Hash64(0x4850604e2930c0a0ull);
	type_code->code_hash = vnx::Hash64(0x913249d6abf60fdbull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->native_size = sizeof(::pilot::USBoardData);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<USBoardData>(); };
	type_code->fields.resize(4);
	{
		auto& field = type_code->fields[0];
		field.data_size = 8;
		field.name = "time";
		field.code = {8};
	}
	{
		auto& field = type_code->fields[1];
		field.data_size = 64;
		field.name = "sensor";
		field.code = {11, 16, 9};
	}
	{
		auto& field = type_code->fields[2];
		field.data_size = 8;
		field.name = "analog_input";
		field.code = {11, 4, 6};
	}
	{
		auto& field = type_code->fields[3];
		field.data_size = 4;
		field.name = "analog_input_scale";
		field.value = vnx::to_string(0.004887);
		field.code = {9};
	}
	type_code->build();
	return type_code;
}


} // namespace pilot


namespace vnx {

void read(TypeInput& in, ::pilot::USBoardData& value, const TypeCode* type_code, const uint16_t* code) {
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
		if(const auto* const _field = type_code->field_map[1]) {
			vnx::read_value(_buf + _field->offset, value.sensor, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[2]) {
			vnx::read_value(_buf + _field->offset, value.analog_input, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[3]) {
			vnx::read_value(_buf + _field->offset, value.analog_input_scale, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::pilot::USBoardData& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = pilot::vnx_native_type_code_USBoardData;
		out.write_type_code(type_code);
		vnx::write_class_header<::pilot::USBoardData>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(84);
	vnx::write_value(_buf + 0, value.time);
	vnx::write_value(_buf + 8, value.sensor);
	vnx::write_value(_buf + 72, value.analog_input);
	vnx::write_value(_buf + 80, value.analog_input_scale);
}

void read(std::istream& in, ::pilot::USBoardData& value) {
	value.read(in);
}

void write(std::ostream& out, const ::pilot::USBoardData& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::pilot::USBoardData& value) {
	value.accept(visitor);
}

} // vnx
