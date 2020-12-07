#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BolaImpactEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BolaImpactEmitter.BolaImpactEmitter_C
// 0x0000 (0x0518 - 0x0518)
class ABolaImpactEmitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BolaImpactEmitter.BolaImpactEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BolaImpactEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
