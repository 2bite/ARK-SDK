#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapStoneHatchet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapStoneHatchet.WeapStoneHatchet_C
// 0x0000 (0x0D90 - 0x0D90)
class AWeapStoneHatchet_C : public AWeapBaseHatchet_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapStoneHatchet.WeapStoneHatchet_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapStoneHatchet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
