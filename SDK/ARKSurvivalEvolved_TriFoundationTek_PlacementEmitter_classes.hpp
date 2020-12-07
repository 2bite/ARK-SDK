#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TriFoundationTek_PlacementEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TriFoundationTek_PlacementEmitter.TriFoundationTek_PlacementEmitter_C
// 0x0000 (0x0518 - 0x0518)
class ATriFoundationTek_PlacementEmitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TriFoundationTek_PlacementEmitter.TriFoundationTek_PlacementEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_TriFoundationTek_PlacementEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
