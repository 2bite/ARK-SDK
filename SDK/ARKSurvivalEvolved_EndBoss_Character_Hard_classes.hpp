#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBoss_Character_Hard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EndBoss_Character_Hard.EndBoss_Character_Hard_C
// 0x000E (0x2BB0 - 0x2BA2)
class AEndBoss_Character_Hard_C : public AEndBoss_Character_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x2BA2(0x0006) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_EndBoss_Hard_C* DinoCharacterStatus_BP_EndBoss_Hard_C1;                   // 0x2BA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EndBoss_Character_Hard.EndBoss_Character_Hard_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_EndBoss_Character_Hard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
