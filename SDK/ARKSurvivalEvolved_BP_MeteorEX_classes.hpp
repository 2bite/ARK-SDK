#pragma once

// ARKSurvivalEvolved (318.14) SDK

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
// 0x0000 (0x0518 - 0x0518)
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
