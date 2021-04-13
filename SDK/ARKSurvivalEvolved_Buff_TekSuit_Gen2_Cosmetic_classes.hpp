#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekSuit_Gen2_Cosmetic_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_TekSuit_Gen2_Cosmetic.Buff_TekSuit_Gen2_Cosmetic_C
// 0x0000 (0x0950 - 0x0950)
class ABuff_TekSuit_Gen2_Cosmetic_C : public APrimalBuff
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekSuit_Gen2_Cosmetic.Buff_TekSuit_Gen2_Cosmetic_C");
		return ptr;
	}


	bool AllowPostProcessEffect();
	void BuffTickClient(float* DeltaTime);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_TekSuit_Gen2_Cosmetic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
