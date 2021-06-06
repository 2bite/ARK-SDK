#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpaceDolphin_AIController_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpaceDolphin_AIController_BP.SpaceDolphin_AIController_BP_C
// 0x0000 (0x0919 - 0x0919)
class ASpaceDolphin_AIController_BP_C : public ADino_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpaceDolphin_AIController_BP.SpaceDolphin_AIController_BP_C");
		return ptr;
	}


	class AActor* BPUpdateBestTarget(class AActor** bestTarget, bool* dontSetIn, bool* dontSetOut);
	void UserConstructionScript();
	void ExecuteUbergraph_SpaceDolphin_AIController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
