#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBossSpiderL_Character_BP_Medium_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EndBossSpiderL_Character_BP_Medium.EndBossSpiderL_Character_BP_Medium_C
// 0x000F (0x2210 - 0x2201)
class AEndBossSpiderL_Character_BP_Medium_C : public AEndBossSpiderL_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x2201(0x0007) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_EndBoss_SpiderBoss_Medium_C* DinoCharacterStatus_BP_EndBoss_SpiderBoss_Medium_C1;      // 0x2208(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EndBossSpiderL_Character_BP_Medium.EndBossSpiderL_Character_BP_Medium_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_EndBossSpiderL_Character_BP_Medium(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
