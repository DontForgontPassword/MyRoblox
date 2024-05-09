// Discord experienceinmymind

namespace fields {
	uint8_t workspace = 0x2D0;
	uint8_t players = 0x1E8; // Я не уверен ебать
	uint8_t health = 0x174;
	uint8_t jumppower = 0x190;
	uint8_t hipheight = 0x180;
	uint8_t walkspeed = 0x1B0;
	uint8_t camerafieldofview = 0x138; // (float)(*(float *)(a1 + 0x138) * 180.0) / 3.1415927;
	uint8_t anchored = 0x158; // *(unsigned __int8 *)(*(_QWORD *)(a1 + 0x158) + 0x2F1i64);
	uint8_t anchored_2 = 0x2F;
	uint8_t cantouch = 0x158; // *(unsigned __int8 *)(*(_QWORD *)(a1 + 0x158) + 0x2F4i64);
	uint8_t cantouch_2 = 0x2F4;
	uint8_t cancollide = 0x158;
	uint8_t cancollide_2 = 0x2F3;
	uint8_t shape = 0x240;
	uint8_t name = 0x8;
	uint8_t destroy = 0xA0;
}

namespace instances {
	uintptr_t datamodel = 0x13B81B0;
	uintptr_t scheduler = 0x13C4000;
	uintptr_t camera = 0x15045F0;
	uintptr_t scriptcontext = 0xC00C00;
}

namespace functions {
	uintptr_t findfirstchild = 0x1D4C430;
	uintptr_t findfirstchildofclass = 0x1D2AB60;
	uintptr_t findfristanchestor = 0x1D4C6C0;
	uintptr_t findfirstanchestorofclass = 0x956CA0;
	uintptr_t findfirstdescendant = 0x1D4C670;
	uintptr_t waitforchild = 0x1D274B0;
	uintptr_t httpgetasync = 0x13A2150;
	uintptr_t loadstring = 0xE91430;
	uintptr_t spawn = 0xE922A0;
	uintptr_t print = 0x12552E0;
	uintptr_t getdescendants = 0x1D2B6B0;
	uintptr_t getchildren = 0x9C7130;
	uintptr_t destroy = 0x1D4C378;
}

typedef void(__fastcall* _print)(std::uint8_t, const char*, ...);
_print print = (_print)((uintptr_t)GetModuleHandle(nullptr) + functions::print);

uintptr_t get_datamodel()
{
	const auto get_datamodel = reinterpret_cast<uintptr_t(_cdecl*)()>((uintptr_t)GetModuleHandle(nullptr) + instances::datamodel);

	return get_datamodel();
}

uintptr_t get_scheduler()
{
	const auto get_scheduler = reinterpret_cast<uintptr_t(_cdecl*)()>((uintptr_t)GetModuleHandle(nullptr) + instances::scheduler);

	return get_scheduler();
}

uintptr_t get_camera()
{
	const auto get_camera = reinterpret_cast<uintptr_t(_cdecl*)()>((uintptr_t)GetModuleHandle(nullptr) + instances::camera);

	return get_camera();
}
