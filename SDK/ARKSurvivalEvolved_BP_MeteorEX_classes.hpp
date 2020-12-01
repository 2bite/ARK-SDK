#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_MeteorEX_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MeteorEX.BP_MeteorEX_C
// 0x0000 (0x0500 - 0x0500)
class ABP_MeteorEX_C : public AExplosionEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MeteorEX.BP_MeteorEX_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_MeteorEX(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
