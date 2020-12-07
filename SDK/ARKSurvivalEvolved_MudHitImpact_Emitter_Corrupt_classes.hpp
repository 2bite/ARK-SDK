#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MudHitImpact_Emitter_Corrupt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MudHitImpact_Emitter_Corrupt.MudHitImpact_Emitter_Corrupt_C
// 0x0000 (0x0518 - 0x0518)
class AMudHitImpact_Emitter_Corrupt_C : public AMudHitImpact_Emitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MudHitImpact_Emitter_Corrupt.MudHitImpact_Emitter_Corrupt_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MudHitImpact_Emitter_Corrupt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
