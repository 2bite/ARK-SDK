#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExplosionEmitter_TropeProj_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ExplosionEmitter_TropeProj.ExplosionEmitter_TropeProj_C
// 0x0000 (0x0518 - 0x0518)
class AExplosionEmitter_TropeProj_C : public AExplosionEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ExplosionEmitter_TropeProj.ExplosionEmitter_TropeProj_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ExplosionEmitter_TropeProj(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
