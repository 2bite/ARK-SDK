#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gigant_Character_BP_TekCave_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Gigant_Character_BP_TekCave.Gigant_Character_BP_TekCave_C
// 0x0008 (0x21A8 - 0x21A0)
class AGigant_Character_BP_TekCave_C : public AGigant_Character_BP_Base_C
{
public:
	class UDinoCharacterStatusComponent_BP_Gigant_C*   DinoCharacterStatus_BP_Gigant_C1_1;                       // 0x21A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gigant_Character_BP_TekCave.Gigant_Character_BP_TekCave_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Gigant_Character_BP_TekCave(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
