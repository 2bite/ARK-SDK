#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDropInventoryComponent_Costume_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDropInventoryComponent_Costume.DinoDropInventoryComponent_Costume_C
// 0x0000 (0x0538 - 0x0538)
class UDinoDropInventoryComponent_Costume_C : public UDinoDropInventoryComponent_BP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDropInventoryComponent_Costume.DinoDropInventoryComponent_Costume_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDropInventoryComponent_Costume(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
