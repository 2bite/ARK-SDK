#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WebEggHatchEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WebEggHatchEmitter.WebEggHatchEmitter_C
// 0x0000 (0x0518 - 0x0518)
class AWebEggHatchEmitter_C : public AExplosionEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WebEggHatchEmitter.WebEggHatchEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WebEggHatchEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
