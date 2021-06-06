#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateSpawnInEmitter15_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SupplyCrateSpawnInEmitter15.SupplyCrateSpawnInEmitter15_C
// 0x0000 (0x0518 - 0x0518)
class ASupplyCrateSpawnInEmitter15_C : public ASupplyCrateSpawnInEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SupplyCrateSpawnInEmitter15.SupplyCrateSpawnInEmitter15_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SupplyCrateSpawnInEmitter15(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
