
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_pilot_Event_HXX_
#define INCLUDE_pilot_Event_HXX_

#include <pilot/package.hxx>
#include <pilot/event_t.hxx>
#include <vnx/Object.hpp>
#include <vnx/Value.h>


namespace pilot {

class Event : public ::vnx::Value {
public:
	
	int64_t time = 0;
	::pilot::event_t event;
	int32_t level = 0;
	::vnx::Object info;
	
	typedef ::vnx::Value Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0xd5e665afbb894f5aull;
	
	Event() {}
	
	vnx::Hash64 get_type_hash() const override;
	std::string get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	static std::shared_ptr<const ::pilot::Event> create_ex(const int64_t& time = 0, const ::pilot::event_t& event = ::pilot::event_t(), const int32_t& level = 0, const ::vnx::Object& info = ::vnx::Object());
	
	static std::shared_ptr<Event> create();
	std::shared_ptr<vnx::Value> clone() const override;
	
	void read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) override;
	void write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const override;
	
	void read(std::istream& _in) override;
	void write(std::ostream& _out) const override;
	
	void accept(vnx::Visitor& _visitor) const override;
	
	vnx::Object to_object() const override;
	void from_object(const vnx::Object& object) override;
	
	vnx::Variant get_field(const std::string& name) const override;
	void set_field(const std::string& name, const vnx::Variant& value) override;
	
	friend std::ostream& operator<<(std::ostream& _out, const Event& _value);
	friend std::istream& operator>>(std::istream& _in, Event& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};


} // namespace pilot


namespace vnx {

} // vnx

#endif // INCLUDE_pilot_Event_HXX_
