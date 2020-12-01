#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SnowHitImpact_Emitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SnowHitImpact_Emitter.SnowHitImpact_Emitter_C
// 0x0000 (0x0500 - 0x0500)
class ASnowHitImpact_Emitter_C : public AQuillShatterImpactEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SnowHitImpact_Emitter.SnowHitImpact_Emitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SnowHitImpact_Emitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif