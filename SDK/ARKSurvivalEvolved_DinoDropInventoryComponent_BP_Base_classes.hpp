#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDropInventoryComponent_BP_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDropInventoryComponent_BP_Base.DinoDropInventoryComponent_BP_Base_C
// 0x0000 (0x0590 - 0x0590)
class UDinoDropInventoryComponent_BP_Base_C : public UPrimalInventoryComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDropInventoryComponent_BP_Base.DinoDropInventoryComponent_BP_Base_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDropInventoryComponent_BP_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
