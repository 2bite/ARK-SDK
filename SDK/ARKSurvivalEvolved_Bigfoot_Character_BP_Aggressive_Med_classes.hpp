#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Bigfoot_Character_BP_Aggressive_Med_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Bigfoot_Character_BP_Aggressive_Med.Bigfoot_Character_BP_Aggressive_Med_C
// 0x0008 (0x28F0 - 0x28E8)
class ABigfoot_Character_BP_Aggressive_Med_C : public ABigfoot_Character_BP_Aggressive_C
{
public:
	class UDinoCharacterStatusComponent_BP_Bigfoot_Med_C* DinoCharacterStatus_BP_Bigfoot_Med_C1;                    // 0x28E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bigfoot_Character_BP_Aggressive_Med.Bigfoot_Character_BP_Aggressive_Med_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Bigfoot_Character_BP_Aggressive_Med(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
