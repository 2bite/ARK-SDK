#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapMetalHatchet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapMetalHatchet.WeapMetalHatchet_C
// 0x0000 (0x0D50 - 0x0D50)
class AWeapMetalHatchet_C : public AWeapBaseHatchet_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapMetalHatchet.WeapMetalHatchet_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapMetalHatchet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
