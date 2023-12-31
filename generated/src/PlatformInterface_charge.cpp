
// AUTO GENERATED by vnxcppcodegen

#include <pilot/package.hxx>
#include <pilot/PlatformInterface_charge.hxx>
#include <pilot/PlatformInterface_charge_return.hxx>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace pilot {


const vnx::Hash64 PlatformInterface_charge::VNX_TYPE_HASH(0x76f5e893e710094cull);
const vnx::Hash64 PlatformInterface_charge::VNX_CODE_HASH(0x5ce2670978d3c5cdull);

vnx::Hash64 PlatformInterface_charge::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string PlatformInterface_charge::get_type_name() const {
	return "pilot.PlatformInterface.charge";
}

const vnx::TypeCode* PlatformInterface_charge::get_type_code() const {
	return pilot::vnx_native_type_code_PlatformInterface_charge;
}

std::shared_ptr<PlatformInterface_charge> PlatformInterface_charge::create() {
	return std::make_shared<PlatformInterface_charge>();
}

std::shared_ptr<vnx::Value> PlatformInterface_charge::clone() const {
	return std::make_shared<PlatformInterface_charge>(*this);
}

void PlatformInterface_charge::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void PlatformInterface_charge::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void PlatformInterface_charge::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = pilot::vnx_native_type_code_PlatformInterface_charge;
	_visitor.type_begin(*_type_code);
	_visitor.type_end(*_type_code);
}

void PlatformInterface_charge::write(std::ostream& _out) const {
	_out << "{\"__type\": \"pilot.PlatformInterface.charge\"";
	_out << "}";
}

void PlatformInterface_charge::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object PlatformInterface_charge::to_object() const {
	vnx::Object _object;
	_object["__type"] = "pilot.PlatformInterface.charge";
	return _object;
}

void PlatformInterface_charge::from_object(const vnx::Object& _object) {
}

vnx::Variant PlatformInterface_charge::get_field(const std::string& _name) const {
	return vnx::Variant();
}

void PlatformInterface_charge::set_field(const std::string& _name, const vnx::Variant& _value) {
	throw std::logic_error("no such field: '" + _name + "'");
}

/// \private
std::ostream& operator<<(std::ostream& _out, const PlatformInterface_charge& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, PlatformInterface_charge& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* PlatformInterface_charge::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> PlatformInterface_charge::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "pilot.PlatformInterface.charge";
	type_code->type_hash = vnx::Hash64(0x76f5e893e710094cull);
	type_code->code_hash = vnx::Hash64(0x5ce2670978d3c5cdull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->is_method = true;
	type_code->native_size = sizeof(::pilot::PlatformInterface_charge);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<PlatformInterface_charge>(); };
	type_code->is_async = true;
	type_code->return_type = ::pilot::PlatformInterface_charge_return::static_get_type_code();
	type_code->permission = "pilot.permission_e.CHARGE";
	type_code->build();
	return type_code;
}


} // namespace pilot


namespace vnx {

void read(TypeInput& in, ::pilot::PlatformInterface_charge& value, const TypeCode* type_code, const uint16_t* code) {
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
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::pilot::PlatformInterface_charge& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = pilot::vnx_native_type_code_PlatformInterface_charge;
		out.write_type_code(type_code);
		vnx::write_class_header<::pilot::PlatformInterface_charge>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
}

void read(std::istream& in, ::pilot::PlatformInterface_charge& value) {
	value.read(in);
}

void write(std::ostream& out, const ::pilot::PlatformInterface_charge& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::pilot::PlatformInterface_charge& value) {
	value.accept(visitor);
}

} // vnx
