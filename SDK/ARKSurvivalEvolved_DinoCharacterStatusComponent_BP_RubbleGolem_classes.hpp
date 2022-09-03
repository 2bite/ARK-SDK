#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_RubbleGolem_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoCharacterStatusComponent_BP_RubbleGolem.DinoCharacterStatusComponent_BP_RubbleGolem_C
// 0x0000 (0x1091 - 0x1091)
class UDinoCharacterStatusComponent_BP_RubbleGolem_C : public UDinoCharacterStatusComponent_BP_RockGolem_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoCharacterStatusComponent_BP_RubbleGolem.DinoCharacterStatusComponent_BP_RubbleGolem_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoCharacterStatusComponent_BP_RubbleGolem(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
