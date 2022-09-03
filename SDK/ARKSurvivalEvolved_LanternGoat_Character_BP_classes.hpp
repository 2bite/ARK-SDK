#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LanternGoat_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LanternGoat_Character_BP.LanternGoat_Character_BP_C
// 0x0008 (0x25C0 - 0x25B8)
class ALanternGoat_Character_BP_C : public ALanternPet_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_LanternGoat_C* DinoCharacterStatus_BP_LanternGoat_C1;                    // 0x25B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LanternGoat_Character_BP.LanternGoat_Character_BP_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void UserConstructionScript();
	void ExecuteUbergraph_LanternGoat_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
