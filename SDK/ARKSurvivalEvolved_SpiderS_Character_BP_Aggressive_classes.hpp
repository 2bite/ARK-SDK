#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpiderS_Character_BP_Aggressive_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpiderS_Character_BP_Aggressive.SpiderS_Character_BP_Aggressive_C
// 0x0000 (0x2190 - 0x2190)
class ASpiderS_Character_BP_Aggressive_C : public ASpiderS_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpiderS_Character_BP_Aggressive.SpiderS_Character_BP_Aggressive_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SpiderS_Character_BP_Aggressive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
