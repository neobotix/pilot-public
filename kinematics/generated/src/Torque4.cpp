
// AUTO GENERATED by vnxcppcodegen

#include <pilot/kinematics/package.hxx>
#include <pilot/kinematics/Torque4.hxx>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace pilot {
namespace kinematics {


const vnx::Hash64 Torque4::VNX_TYPE_HASH(0xcd08b60a6278c0c7ull);
const vnx::Hash64 Torque4::VNX_CODE_HASH(0x5de6d361bbd39af3ull);

vnx::Hash64 Torque4::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string Torque4::get_type_name() const {
	return "pilot.kinematics.Torque4";
}

const vnx::TypeCode* Torque4::get_type_code() const {
	return pilot::kinematics::vnx_native_type_code_Torque4;
}

std::shared_ptr<Torque4> Torque4::create() {
	return std::make_shared<Torque4>();
}

std::shared_ptr<vnx::Value> Torque4::clone() const {
	return std::make_shared<Torque4>(*this);
}

void Torque4::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void Torque4::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void Torque4::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = pilot::kinematics::vnx_native_type_code_Torque4;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, front_left);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, back_left);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, back_right);
	_visitor.type_field(_type_code->fields[3], 3); vnx::accept(_visitor, front_right);
	_visitor.type_end(*_type_code);
}

void Torque4::write(std::ostream& _out) const {
	_out << "{\"__type\": \"pilot.kinematics.Torque4\"";
	_out << ", \"front_left\": "; vnx::write(_out, front_left);
	_out << ", \"back_left\": "; vnx::write(_out, back_left);
	_out << ", \"back_right\": "; vnx::write(_out, back_right);
	_out << ", \"front_right\": "; vnx::write(_out, front_right);
	_out << "}";
}

void Torque4::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object Torque4::to_object() const {
	vnx::Object _object;
	_object["__type"] = "pilot.kinematics.Torque4";
	_object["front_left"] = front_left;
	_object["back_left"] = back_left;
	_object["back_right"] = back_right;
	_object["front_right"] = front_right;
	return _object;
}

void Torque4::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "back_left") {
			_entry.second.to(back_left);
		} else if(_entry.first == "back_right") {
			_entry.second.to(back_right);
		} else if(_entry.first == "front_left") {
			_entry.second.to(front_left);
		} else if(_entry.first == "front_right") {
			_entry.second.to(front_right);
		}
	}
}

vnx::Variant Torque4::get_field(const std::string& _name) const {
	if(_name == "front_left") {
		return vnx::Variant(front_left);
	}
	if(_name == "back_left") {
		return vnx::Variant(back_left);
	}
	if(_name == "back_right") {
		return vnx::Variant(back_right);
	}
	if(_name == "front_right") {
		return vnx::Variant(front_right);
	}
	return vnx::Variant();
}

void Torque4::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "front_left") {
		_value.to(front_left);
	} else if(_name == "back_left") {
		_value.to(back_left);
	} else if(_name == "back_right") {
		_value.to(back_right);
	} else if(_name == "front_right") {
		_value.to(front_right);
	} else {
		throw std::logic_error("no such field: '" + _name + "'");
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const Torque4& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, Torque4& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* Torque4::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> Torque4::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "pilot.kinematics.Torque4";
	type_code->type_hash = vnx::Hash64(0xcd08b60a6278c0c7ull);
	type_code->code_hash = vnx::Hash64(0x5de6d361bbd39af3ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->native_size = sizeof(::pilot::kinematics::Torque4);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<Torque4>(); };
	type_code->fields.resize(4);
	{
		auto& field = type_code->fields[0];
		field.data_size = 4;
		field.name = "front_left";
		field.code = {9};
	}
	{
		auto& field = type_code->fields[1];
		field.data_size = 4;
		field.name = "back_left";
		field.code = {9};
	}
	{
		auto& field = type_code->fields[2];
		field.data_size = 4;
		field.name = "back_right";
		field.code = {9};
	}
	{
		auto& field = type_code->fields[3];
		field.data_size = 4;
		field.name = "front_right";
		field.code = {9};
	}
	type_code->build();
	return type_code;
}


} // namespace pilot
} // namespace kinematics


namespace vnx {

void read(TypeInput& in, ::pilot::kinematics::Torque4& value, const TypeCode* type_code, const uint16_t* code) {
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
			vnx::read_value(_buf + _field->offset, value.front_left, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[1]) {
			vnx::read_value(_buf + _field->offset, value.back_left, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[2]) {
			vnx::read_value(_buf + _field->offset, value.back_right, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[3]) {
			vnx::read_value(_buf + _field->offset, value.front_right, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::pilot::kinematics::Torque4& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = pilot::kinematics::vnx_native_type_code_Torque4;
		out.write_type_code(type_code);
		vnx::write_class_header<::pilot::kinematics::Torque4>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(16);
	vnx::write_value(_buf + 0, value.front_left);
	vnx::write_value(_buf + 4, value.back_left);
	vnx::write_value(_buf + 8, value.back_right);
	vnx::write_value(_buf + 12, value.front_right);
}

void read(std::istream& in, ::pilot::kinematics::Torque4& value) {
	value.read(in);
}

void write(std::ostream& out, const ::pilot::kinematics::Torque4& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::pilot::kinematics::Torque4& value) {
	value.accept(visitor);
}

} // vnx
