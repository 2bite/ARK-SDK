#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateEmitter25_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SupplyCrateEmitter25.SupplyCrateEmitter25_C
// 0x0000 (0x0518 - 0x0518)
class ASupplyCrateEmitter25_C : public ASupplyCrateEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SupplyCrateEmitter25.SupplyCrateEmitter25_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SupplyCrateEmitter25(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif