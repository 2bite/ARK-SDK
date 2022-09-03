#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BogSpider_Character_BP_Summoned_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BogSpider_Character_BP_Summoned.BogSpider_Character_BP_Summoned_C
// 0x0000 (0x4607 - 0x4607)
class ABogSpider_Character_BP_Summoned_C : public ABogSpider_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BogSpider_Character_BP_Summoned.BogSpider_Character_BP_Summoned_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BogSpider_Character_BP_Summoned(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
