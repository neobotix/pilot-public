
// AUTO GENERATED by vnxcppcodegen

#include <pilot/package.hxx>
#include <pilot/SafetyInterface_select_safety_field.hxx>
#include <pilot/SafetyInterface_select_safety_field_return.hxx>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace pilot {


const vnx::Hash64 SafetyInterface_select_safety_field::VNX_TYPE_HASH(0xc411be3b6bf47152ull);
const vnx::Hash64 SafetyInterface_select_safety_field::VNX_CODE_HASH(0x6207563cdc532927ull);

vnx::Hash64 SafetyInterface_select_safety_field::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string SafetyInterface_select_safety_field::get_type_name() const {
	return "pilot.SafetyInterface.select_safety_field";
}

const vnx::TypeCode* SafetyInterface_select_safety_field::get_type_code() const {
	return pilot::vnx_native_type_code_SafetyInterface_select_safety_field;
}

std::shared_ptr<SafetyInterface_select_safety_field> SafetyInterface_select_safety_field::create() {
	return std::make_shared<SafetyInterface_select_safety_field>();
}

std::shared_ptr<vnx::Value> SafetyInterface_select_safety_field::clone() const {
	return std::make_shared<SafetyInterface_select_safety_field>(*this);
}

void SafetyInterface_select_safety_field::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void SafetyInterface_select_safety_field::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void SafetyInterface_select_safety_field::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = pilot::vnx_native_type_code_SafetyInterface_select_safety_field;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, field_id);
	_visitor.type_end(*_type_code);
}

void SafetyInterface_select_safety_field::write(std::ostream& _out) const {
	_out << "{\"__type\": \"pilot.SafetyInterface.select_safety_field\"";
	_out << ", \"field_id\": "; vnx::write(_out, field_id);
	_out << "}";
}

void SafetyInterface_select_safety_field::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object SafetyInterface_select_safety_field::to_object() const {
	vnx::Object _object;
	_object["__type"] = "pilot.SafetyInterface.select_safety_field";
	_object["field_id"] = field_id;
	return _object;
}

void SafetyInterface_select_safety_field::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "field_id") {
			_entry.second.to(field_id);
		}
	}
}

vnx::Variant SafetyInterface_select_safety_field::get_field(const std::string& _name) const {
	if(_name == "field_id") {
		return vnx::Variant(field_id);
	}
	return vnx::Variant();
}

void SafetyInterface_select_safety_field::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "field_id") {
		_value.to(field_id);
	} else {
		throw std::logic_error("no such field: '" + _name + "'");
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const SafetyInterface_select_safety_field& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, SafetyInterface_select_safety_field& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* SafetyInterface_select_safety_field::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> SafetyInterface_select_safety_field::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "pilot.SafetyInterface.select_safety_field";
	type_code->type_hash = vnx::Hash64(0xc411be3b6bf47152ull);
	type_code->code_hash = vnx::Hash64(0x6207563cdc532927ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->is_method = true;
	type_code->native_size = sizeof(::pilot::SafetyInterface_select_safety_field);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<SafetyInterface_select_safety_field>(); };
	type_code->return_type = ::pilot::SafetyInterface_select_safety_field_return::static_get_type_code();
	type_code->fields.resize(1);
	{
		auto& field = type_code->fields[0];
		field.data_size = 4;
		field.name = "field_id";
		field.code = {3};
	}
	type_code->permission = "pilot.permission_e.SAFETY_FIELD_CONTROL";
	type_code->build();
	return type_code;
}


} // namespace pilot


namespace vnx {

void read(TypeInput& in, ::pilot::SafetyInterface_select_safety_field& value, const TypeCode* type_code, const uint16_t* code) {
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
			vnx::read_value(_buf + _field->offset, value.field_id, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::pilot::SafetyInterface_select_safety_field& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = pilot::vnx_native_type_code_SafetyInterface_select_safety_field;
		out.write_type_code(type_code);
		vnx::write_class_header<::pilot::SafetyInterface_select_safety_field>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(4);
	vnx::write_value(_buf + 0, value.field_id);
}

void read(std::istream& in, ::pilot::SafetyInterface_select_safety_field& value) {
	value.read(in);
}

void write(std::ostream& out, const ::pilot::SafetyInterface_select_safety_field& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::pilot::SafetyInterface_select_safety_field& value) {
	value.accept(visitor);
}

} // vnx
