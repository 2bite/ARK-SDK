#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Bigfoot_Character_BP_Aggressive_Hard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Bigfoot_Character_BP_Aggressive_Hard.Bigfoot_Character_BP_Aggressive_Hard_C
// 0x0008 (0x2A50 - 0x2A48)
class ABigfoot_Character_BP_Aggressive_Hard_C : public ABigfoot_Character_BP_Aggressive_C
{
public:
	class UDinoCharacterStatusComponent_BP_Bigfoot_Hard_C* DinoCharacterStatus_BP_Bigfoot_Hard_C1;                   // 0x2A48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bigfoot_Character_BP_Aggressive_Hard.Bigfoot_Character_BP_Aggressive_Hard_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Bigfoot_Character_BP_Aggressive_Hard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
