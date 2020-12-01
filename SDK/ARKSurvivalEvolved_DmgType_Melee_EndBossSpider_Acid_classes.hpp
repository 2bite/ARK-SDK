#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_Melee_EndBossSpider_Acid_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_Melee_EndBossSpider_Acid.DmgType_Melee_EndBossSpider_Acid_C
// 0x0000 (0x0131 - 0x0131)
class UDmgType_Melee_EndBossSpider_Acid_C : public UDmgType_Melee_SpiderBoss_Acid_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Melee_EndBossSpider_Acid.DmgType_Melee_EndBossSpider_Acid_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
