#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SmallExplosionEmitter_Flare_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SmallExplosionEmitter_Flare.SmallExplosionEmitter_Flare_C
// 0x0000 (0x0510 - 0x0510)
class ASmallExplosionEmitter_Flare_C : public AExplosionEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SmallExplosionEmitter_Flare.SmallExplosionEmitter_Flare_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SmallExplosionEmitter_Flare(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
