#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Trope_AIController_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Trope_AIController_BP.Trope_AIController_BP_C
// 0x0000 (0x0919 - 0x0919)
class ATrope_AIController_BP_C : public ADino_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trope_AIController_BP.Trope_AIController_BP_C");
		return ptr;
	}


	class AActor* BPUpdateBestTarget(class AActor** bestTarget, bool* dontSetIn, bool* dontSetOut);
	void UserConstructionScript();
	void ExecuteUbergraph_Trope_AIController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
