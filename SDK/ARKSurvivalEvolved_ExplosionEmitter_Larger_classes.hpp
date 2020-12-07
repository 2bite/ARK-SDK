#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExplosionEmitter_Larger_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ExplosionEmitter_Larger.ExplosionEmitter_Larger_C
// 0x0000 (0x0518 - 0x0518)
class AExplosionEmitter_Larger_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ExplosionEmitter_Larger.ExplosionEmitter_Larger_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ExplosionEmitter_Larger(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
