#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SnowTreeHarvestEmitter_CanopyTall_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SnowTreeHarvestEmitter_CanopyTall.SnowTreeHarvestEmitter_CanopyTall_C
// 0x0000 (0x0518 - 0x0518)
class ASnowTreeHarvestEmitter_CanopyTall_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SnowTreeHarvestEmitter_CanopyTall.SnowTreeHarvestEmitter_CanopyTall_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SnowTreeHarvestEmitter_CanopyTall(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
