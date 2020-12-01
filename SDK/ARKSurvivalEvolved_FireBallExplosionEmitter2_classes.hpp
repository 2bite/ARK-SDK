#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FireBallExplosionEmitter2_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FireBallExplosionEmitter2.FireBallExplosionEmitter2_C
// 0x0000 (0x0500 - 0x0500)
class AFireBallExplosionEmitter2_C : public AExplosionEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FireBallExplosionEmitter2.FireBallExplosionEmitter2_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_FireBallExplosionEmitter2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
