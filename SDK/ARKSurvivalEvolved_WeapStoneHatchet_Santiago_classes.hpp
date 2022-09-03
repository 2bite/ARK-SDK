#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapStoneHatchet_Santiago_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapStoneHatchet_Santiago.WeapStoneHatchet_Santiago_C
// 0x0000 (0x0D88 - 0x0D88)
class AWeapStoneHatchet_Santiago_C : public AWeapStoneHatchet_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapStoneHatchet_Santiago.WeapStoneHatchet_Santiago_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapStoneHatchet_Santiago(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
