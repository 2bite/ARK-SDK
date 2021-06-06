#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateEmitter35_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SupplyCrateEmitter35.SupplyCrateEmitter35_C
// 0x0000 (0x0518 - 0x0518)
class ASupplyCrateEmitter35_C : public ASupplyCrateEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SupplyCrateEmitter35.SupplyCrateEmitter35_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SupplyCrateEmitter35(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
