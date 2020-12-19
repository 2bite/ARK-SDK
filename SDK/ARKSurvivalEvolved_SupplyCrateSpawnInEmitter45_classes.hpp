#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateSpawnInEmitter45_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SupplyCrateSpawnInEmitter45.SupplyCrateSpawnInEmitter45_C
// 0x0000 (0x0518 - 0x0518)
class ASupplyCrateSpawnInEmitter45_C : public ASupplyCrateSpawnInEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SupplyCrateSpawnInEmitter45.SupplyCrateSpawnInEmitter45_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SupplyCrateSpawnInEmitter45(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
