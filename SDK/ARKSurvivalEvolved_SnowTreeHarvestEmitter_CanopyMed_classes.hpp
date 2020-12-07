#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SnowTreeHarvestEmitter_CanopyMed_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SnowTreeHarvestEmitter_CanopyMed.SnowTreeHarvestEmitter_CanopyMed_C
// 0x0000 (0x0518 - 0x0518)
class ASnowTreeHarvestEmitter_CanopyMed_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SnowTreeHarvestEmitter_CanopyMed.SnowTreeHarvestEmitter_CanopyMed_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SnowTreeHarvestEmitter_CanopyMed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
