#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateSpawnInEmitter60_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SupplyCrateSpawnInEmitter60.SupplyCrateSpawnInEmitter60_C
// 0x0000 (0x0510 - 0x0510)
class ASupplyCrateSpawnInEmitter60_C : public ASupplyCrateSpawnInEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SupplyCrateSpawnInEmitter60.SupplyCrateSpawnInEmitter60_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SupplyCrateSpawnInEmitter60(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
