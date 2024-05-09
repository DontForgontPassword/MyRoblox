// Discord experienceinmymind

namespace fields {
	uint8_t workspace = 0x2D0;
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
	uint8_t camera = 0xC0;
	uint8_t shape = 0x240;
	uint8_t name = 0x8;
	uint8_t destroy = 0xA0;
}

namespace instances {
	uintptr_t datamodel = 0x13DD3B0;
	uintptr_t scheduler = 0x13E9200;
	uintptr_t scriptcontext = 0xC16B60;
}

namespace functions {
	uintptr_t httpgetasync = 0x13C7330;
	uintptr_t loadstring = 0xE91430;
	uintptr_t spawn = 0xEA3680;
	uintptr_t print = 0x1279FF0;
	uintptr_t destroy = 0x1D652D8;
	uintptr_t printidentity = 0;
	uintptr_t pseudo2addr = 0x2576930;
	uintptr_t luavm_load = 0xC19180;
	uintptr_t decode_scheduler_job = 0x2AF6960;
}