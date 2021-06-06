#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_MushroomSporeEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MushroomSporeEmitter.BP_MushroomSporeEmitter_C
// 0x0000 (0x0830 - 0x0830)
class UBP_MushroomSporeEmitter_C : public UParticleSystemComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MushroomSporeEmitter.BP_MushroomSporeEmitter_C");
		return ptr;
	}


	void ExecuteUbergraph_BP_MushroomSporeEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
