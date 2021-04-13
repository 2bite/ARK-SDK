#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpiderL_Character_BP_Easy_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpiderL_Character_BP_Easy.SpiderL_Character_BP_Easy_C
// 0x0000 (0x21F9 - 0x21F9)
class ASpiderL_Character_BP_Easy_C : public ASpiderL_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpiderL_Character_BP_Easy.SpiderL_Character_BP_Easy_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SpiderL_Character_BP_Easy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
