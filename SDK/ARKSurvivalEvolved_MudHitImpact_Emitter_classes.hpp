#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MudHitImpact_Emitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MudHitImpact_Emitter.MudHitImpact_Emitter_C
// 0x0000 (0x0510 - 0x0510)
class AMudHitImpact_Emitter_C : public AQuillShatterImpactEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MudHitImpact_Emitter.MudHitImpact_Emitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MudHitImpact_Emitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
