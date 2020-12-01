#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WebExplosionEmitterSmall_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WebExplosionEmitterSmall.WebExplosionEmitterSmall_C
// 0x0000 (0x0510 - 0x0510)
class AWebExplosionEmitterSmall_C : public AExplosionEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WebExplosionEmitterSmall.WebExplosionEmitterSmall_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WebExplosionEmitterSmall(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
