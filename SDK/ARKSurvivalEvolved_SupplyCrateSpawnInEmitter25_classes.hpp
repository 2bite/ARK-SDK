#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateSpawnInEmitter25_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SupplyCrateSpawnInEmitter25.SupplyCrateSpawnInEmitter25_C
// 0x0000 (0x0518 - 0x0518)
class ASupplyCrateSpawnInEmitter25_C : public ASupplyCrateSpawnInEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SupplyCrateSpawnInEmitter25.SupplyCrateSpawnInEmitter25_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SupplyCrateSpawnInEmitter25(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
