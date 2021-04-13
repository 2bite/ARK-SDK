#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpiderL_Character_BP_Medium_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpiderL_Character_BP_Medium.SpiderL_Character_BP_Medium_C
// 0x000F (0x2208 - 0x21F9)
class ASpiderL_Character_BP_Medium_C : public ASpiderL_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x21F9(0x0007) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_SpiderBoss_Medium_C* DinoCharacterStatus_BP_SpiderBoss_Medium_C1;              // 0x2200(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpiderL_Character_BP_Medium.SpiderL_Character_BP_Medium_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SpiderL_Character_BP_Medium(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
