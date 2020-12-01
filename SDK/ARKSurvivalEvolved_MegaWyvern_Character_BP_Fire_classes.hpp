#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MegaWyvern_Character_BP_Fire_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MegaWyvern_Character_BP_Fire.MegaWyvern_Character_BP_Fire_C
// 0x0008 (0x2248 - 0x2240)
class AMegaWyvern_Character_BP_Fire_C : public AWyvern_Character_BP_Fire_C
{
public:
	class UDinoCharacterStatusComponent_BP_MegaWyvern_C* DinoCharacterStatus_BP_MegaWyvern_C1;                     // 0x2240(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MegaWyvern_Character_BP_Fire.MegaWyvern_Character_BP_Fire_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MegaWyvern_Character_BP_Fire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
