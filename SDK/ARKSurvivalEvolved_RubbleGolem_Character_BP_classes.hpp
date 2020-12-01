#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RubbleGolem_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RubbleGolem_Character_BP.RubbleGolem_Character_BP_C
// 0x000B (0x2300 - 0x22F5)
class ARubbleGolem_Character_BP_C : public ARockGolem_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x22F5(0x0003) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_RubbleGolem_C* DinoCharacterStatus_BP_RubbleGolem_C1;                    // 0x22F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RubbleGolem_Character_BP.RubbleGolem_Character_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_RubbleGolem_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
