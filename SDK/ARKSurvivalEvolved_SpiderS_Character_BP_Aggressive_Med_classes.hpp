#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpiderS_Character_BP_Aggressive_Med_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpiderS_Character_BP_Aggressive_Med.SpiderS_Character_BP_Aggressive_Med_C
// 0x0008 (0x2118 - 0x2110)
class ASpiderS_Character_BP_Aggressive_Med_C : public ASpiderS_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Spider_Med_C* DinoCharacterStatus_BP_Spider_Med_C1;                     // 0x2110(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpiderS_Character_BP_Aggressive_Med.SpiderS_Character_BP_Aggressive_Med_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SpiderS_Character_BP_Aggressive_Med(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
