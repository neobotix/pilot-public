
// AUTO GENERATED by vnxcppcodegen

#include <pilot/kinematics/package.hxx>
#include <pilot/kinematics/PositionAny.hxx>
#include <pilot/kinematics/position_code_e.hxx>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace pilot {
namespace kinematics {


const vnx::Hash64 PositionAny::VNX_TYPE_HASH(0x64c651102a4df965ull);
const vnx::Hash64 PositionAny::VNX_CODE_HASH(0xdc8677880cd5b580ull);

vnx::Hash64 PositionAny::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string PositionAny::get_type_name() const {
	return "pilot.kinematics.PositionAny";
}

const vnx::TypeCode* PositionAny::get_type_code() const {
	return pilot::kinematics::vnx_native_type_code_PositionAny;
}

std::shared_ptr<PositionAny> PositionAny::create() {
	return std::make_shared<PositionAny>();
}

std::shared_ptr<vnx::Value> PositionAny::clone() const {
	return std::make_shared<PositionAny>(*this);
}

void PositionAny::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void PositionAny::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void PositionAny::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = pilot::kinematics::vnx_native_type_code_PositionAny;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, positions);
	_visitor.type_end(*_type_code);
}

void PositionAny::write(std::ostream& _out) const {
	_out << "{\"__type\": \"pilot.kinematics.PositionAny\"";
	_out << ", \"positions\": "; vnx::write(_out, positions);
	_out << "}";
}

void PositionAny::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object PositionAny::to_object() const {
	vnx::Object _object;
	_object["__type"] = "pilot.kinematics.PositionAny";
	_object["positions"] = positions;
	return _object;
}

void PositionAny::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "positions") {
			_entry.second.to(positions);
		}
	}
}

vnx::Variant PositionAny::get_field(const std::string& _name) const {
	if(_name == "positions") {
		return vnx::Variant(positions);
	}
	return vnx::Variant();
}

void PositionAny::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "positions") {
		_value.to(positions);
	} else {
		throw std::logic_error("no such field: '" + _name + "'");
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const PositionAny& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, PositionAny& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* PositionAny::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> PositionAny::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "pilot.kinematics.PositionAny";
	type_code->type_hash = vnx::Hash64(0x64c651102a4df965ull);
	type_code->code_hash = vnx::Hash64(0xdc8677880cd5b580ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->native_size = sizeof(::pilot::kinematics::PositionAny);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<PositionAny>(); };
	type_code->depends.resize(1);
	type_code->depends[0] = ::pilot::kinematics::position_code_e::static_get_type_code();
	type_code->fields.resize(1);
	{
		auto& field = type_code->fields[0];
		field.is_extended = true;
		field.name = "positions";
		field.code = {13, 4, 19, 0, 10};
	}
	type_code->build();
	return type_code;
}


} // namespace pilot
} // namespace kinematics


namespace vnx {

void read(TypeInput& in, ::pilot::kinematics::PositionAny& value, const TypeCode* type_code, const uint16_t* code) {
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
	in.read(type_code->total_field_size);
	if(type_code->is_matched) {
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 0: vnx::read(in, value.positions, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::pilot::kinematics::PositionAny& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = pilot::kinematics::vnx_native_type_code_PositionAny;
		out.write_type_code(type_code);
		vnx::write_class_header<::pilot::kinematics::PositionAny>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	vnx::write(out, value.positions, type_code, type_code->fields[0].code.data());
}

void read(std::istream& in, ::pilot::kinematics::PositionAny& value) {
	value.read(in);
}

void write(std::ostream& out, const ::pilot::kinematics::PositionAny& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::pilot::kinematics::PositionAny& value) {
	value.accept(visitor);
}

} // vnx
