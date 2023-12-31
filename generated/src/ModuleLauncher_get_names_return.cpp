
// AUTO GENERATED by vnxcppcodegen

#include <pilot/package.hxx>
#include <pilot/ModuleLauncher_get_names_return.hxx>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace pilot {


const vnx::Hash64 ModuleLauncher_get_names_return::VNX_TYPE_HASH(0x85453d43e9d88683ull);
const vnx::Hash64 ModuleLauncher_get_names_return::VNX_CODE_HASH(0x9a716b25724371cfull);

vnx::Hash64 ModuleLauncher_get_names_return::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string ModuleLauncher_get_names_return::get_type_name() const {
	return "pilot.ModuleLauncher.get_names.return";
}

const vnx::TypeCode* ModuleLauncher_get_names_return::get_type_code() const {
	return pilot::vnx_native_type_code_ModuleLauncher_get_names_return;
}

std::shared_ptr<ModuleLauncher_get_names_return> ModuleLauncher_get_names_return::create() {
	return std::make_shared<ModuleLauncher_get_names_return>();
}

std::shared_ptr<vnx::Value> ModuleLauncher_get_names_return::clone() const {
	return std::make_shared<ModuleLauncher_get_names_return>(*this);
}

void ModuleLauncher_get_names_return::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void ModuleLauncher_get_names_return::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void ModuleLauncher_get_names_return::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = pilot::vnx_native_type_code_ModuleLauncher_get_names_return;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, _ret_0);
	_visitor.type_end(*_type_code);
}

void ModuleLauncher_get_names_return::write(std::ostream& _out) const {
	_out << "{\"__type\": \"pilot.ModuleLauncher.get_names.return\"";
	_out << ", \"_ret_0\": "; vnx::write(_out, _ret_0);
	_out << "}";
}

void ModuleLauncher_get_names_return::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object ModuleLauncher_get_names_return::to_object() const {
	vnx::Object _object;
	_object["__type"] = "pilot.ModuleLauncher.get_names.return";
	_object["_ret_0"] = _ret_0;
	return _object;
}

void ModuleLauncher_get_names_return::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "_ret_0") {
			_entry.second.to(_ret_0);
		}
	}
}

vnx::Variant ModuleLauncher_get_names_return::get_field(const std::string& _name) const {
	if(_name == "_ret_0") {
		return vnx::Variant(_ret_0);
	}
	return vnx::Variant();
}

void ModuleLauncher_get_names_return::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "_ret_0") {
		_value.to(_ret_0);
	} else {
		throw std::logic_error("no such field: '" + _name + "'");
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const ModuleLauncher_get_names_return& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, ModuleLauncher_get_names_return& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* ModuleLauncher_get_names_return::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> ModuleLauncher_get_names_return::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "pilot.ModuleLauncher.get_names.return";
	type_code->type_hash = vnx::Hash64(0x85453d43e9d88683ull);
	type_code->code_hash = vnx::Hash64(0x9a716b25724371cfull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->is_return = true;
	type_code->native_size = sizeof(::pilot::ModuleLauncher_get_names_return);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<ModuleLauncher_get_names_return>(); };
	type_code->fields.resize(1);
	{
		auto& field = type_code->fields[0];
		field.is_extended = true;
		field.name = "_ret_0";
		field.code = {12, 32};
	}
	type_code->build();
	return type_code;
}


} // namespace pilot


namespace vnx {

void read(TypeInput& in, ::pilot::ModuleLauncher_get_names_return& value, const TypeCode* type_code, const uint16_t* code) {
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
			case 0: vnx::read(in, value._ret_0, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::pilot::ModuleLauncher_get_names_return& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = pilot::vnx_native_type_code_ModuleLauncher_get_names_return;
		out.write_type_code(type_code);
		vnx::write_class_header<::pilot::ModuleLauncher_get_names_return>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	vnx::write(out, value._ret_0, type_code, type_code->fields[0].code.data());
}

void read(std::istream& in, ::pilot::ModuleLauncher_get_names_return& value) {
	value.read(in);
}

void write(std::ostream& out, const ::pilot::ModuleLauncher_get_names_return& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::pilot::ModuleLauncher_get_names_return& value) {
	value.accept(visitor);
}

} // vnx
