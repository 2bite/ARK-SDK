#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Andrewsarchus_AIController_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Andrewsarchus_AIController_BP.Andrewsarchus_AIController_BP_C
// 0x0000 (0x0919 - 0x0919)
class AAndrewsarchus_AIController_BP_C : public ADino_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Andrewsarchus_AIController_BP.Andrewsarchus_AIController_BP_C");
		return ptr;
	}


	void OnPossess(class APawn** PossessedPawn);
	void ResetUseOverlapCheck();
	void UserConstructionScript();
	void ExecuteUbergraph_Andrewsarchus_AIController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif