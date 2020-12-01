#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateSpawnInEmitter35_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SupplyCrateSpawnInEmitter35.SupplyCrateSpawnInEmitter35_C
// 0x0000 (0x0510 - 0x0510)
class ASupplyCrateSpawnInEmitter35_C : public ASupplyCrateSpawnInEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SupplyCrateSpawnInEmitter35.SupplyCrateSpawnInEmitter35_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SupplyCrateSpawnInEmitter35(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
