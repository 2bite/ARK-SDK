#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LanternLizard_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LanternLizard_Character_BP.LanternLizard_Character_BP_C
// 0x0008 (0x25A0 - 0x2598)
class ALanternLizard_Character_BP_C : public ALanternPet_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_LanternLizard_C* DinoCharacterStatus_BP_LanternLizard_C1;                  // 0x2598(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LanternLizard_Character_BP.LanternLizard_Character_BP_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void UserConstructionScript();
	void ExecuteUbergraph_LanternLizard_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
