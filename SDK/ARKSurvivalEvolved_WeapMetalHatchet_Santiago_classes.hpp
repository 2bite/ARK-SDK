#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapMetalHatchet_Santiago_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapMetalHatchet_Santiago.WeapMetalHatchet_Santiago_C
// 0x0000 (0x0D88 - 0x0D88)
class AWeapMetalHatchet_Santiago_C : public AWeapMetalHatchet_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapMetalHatchet_Santiago.WeapMetalHatchet_Santiago_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapMetalHatchet_Santiago(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
