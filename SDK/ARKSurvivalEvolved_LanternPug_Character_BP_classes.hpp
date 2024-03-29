#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LanternPug_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LanternPug_Character_BP.LanternPug_Character_BP_C
// 0x0008 (0x25C0 - 0x25B8)
class ALanternPug_Character_BP_C : public ALanternPet_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_LanternPug_C* DinoCharacterStatus_BP_LanternPug_C1;                     // 0x25B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LanternPug_Character_BP.LanternPug_Character_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_LanternPug_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
