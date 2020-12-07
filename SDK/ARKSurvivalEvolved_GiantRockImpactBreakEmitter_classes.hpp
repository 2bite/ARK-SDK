#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GiantRockImpactBreakEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GiantRockImpactBreakEmitter.GiantRockImpactBreakEmitter_C
// 0x0000 (0x0518 - 0x0518)
class AGiantRockImpactBreakEmitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GiantRockImpactBreakEmitter.GiantRockImpactBreakEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_GiantRockImpactBreakEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
