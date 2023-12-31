
// AUTO GENERATED by vnxcppcodegen

#include <pilot/package.hxx>
#include <pilot/ModuleLauncher_stop.hxx>
#include <pilot/ModuleLauncher_stop_return.hxx>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace pilot {


const vnx::Hash64 ModuleLauncher_stop::VNX_TYPE_HASH(0xbf9f252ee31001d6ull);
const vnx::Hash64 ModuleLauncher_stop::VNX_CODE_HASH(0xb9ddfe9cb067a618ull);

vnx::Hash64 ModuleLauncher_stop::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string ModuleLauncher_stop::get_type_name() const {
	return "pilot.ModuleLauncher.stop";
}

const vnx::TypeCode* ModuleLauncher_stop::get_type_code() const {
	return pilot::vnx_native_type_code_ModuleLauncher_stop;
}

std::shared_ptr<ModuleLauncher_stop> ModuleLauncher_stop::create() {
	return std::make_shared<ModuleLauncher_stop>();
}

std::shared_ptr<vnx::Value> ModuleLauncher_stop::clone() const {
	return std::make_shared<ModuleLauncher_stop>(*this);
}

void ModuleLauncher_stop::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void ModuleLauncher_stop::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void ModuleLauncher_stop::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = pilot::vnx_native_type_code_ModuleLauncher_stop;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, name);
	_visitor.type_end(*_type_code);
}

void ModuleLauncher_stop::write(std::ostream& _out) const {
	_out << "{\"__type\": \"pilot.ModuleLauncher.stop\"";
	_out << ", \"name\": "; vnx::write(_out, name);
	_out << "}";
}

void ModuleLauncher_stop::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object ModuleLauncher_stop::to_object() const {
	vnx::Object _object;
	_object["__type"] = "pilot.ModuleLauncher.stop";
	_object["name"] = name;
	return _object;
}

void ModuleLauncher_stop::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "name") {
			_entry.second.to(name);
		}
	}
}

vnx::Variant ModuleLauncher_stop::get_field(const std::string& _name) const {
	if(_name == "name") {
		return vnx::Variant(name);
	}
	return vnx::Variant();
}

void ModuleLauncher_stop::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "name") {
		_value.to(name);
	} else {
		throw std::logic_error("no such field: '" + _name + "'");
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const ModuleLauncher_stop& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, ModuleLauncher_stop& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* ModuleLauncher_stop::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> ModuleLauncher_stop::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "pilot.ModuleLauncher.stop";
	type_code->type_hash = vnx::Hash64(0xbf9f252ee31001d6ull);
	type_code->code_hash = vnx::Hash64(0xb9ddfe9cb067a618ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->is_method = true;
	type_code->native_size = sizeof(::pilot::ModuleLauncher_stop);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<ModuleLauncher_stop>(); };
	type_code->return_type = ::pilot::ModuleLauncher_stop_return::static_get_type_code();
	type_code->fields.resize(1);
	{
		auto& field = type_code->fields[0];
		field.is_extended = true;
		field.name = "name";
		field.code = {32};
	}
	type_code->build();
	return type_code;
}


} // namespace pilot


namespace vnx {

void read(TypeInput& in, ::pilot::ModuleLauncher_stop& value, const TypeCode* type_code, const uint16_t* code) {
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
			case 0: vnx::read(in, value.name, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::pilot::ModuleLauncher_stop& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = pilot::vnx_native_type_code_ModuleLauncher_stop;
		out.write_type_code(type_code);
		vnx::write_class_header<::pilot::ModuleLauncher_stop>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	vnx::write(out, value.name, type_code, type_code->fields[0].code.data());
}

void read(std::istream& in, ::pilot::ModuleLauncher_stop& value) {
	value.read(in);
}

void write(std::ostream& out, const ::pilot::ModuleLauncher_stop& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::pilot::ModuleLauncher_stop& value) {
	value.accept(visitor);
}

} // vnx
