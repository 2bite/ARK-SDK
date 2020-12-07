#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDropInventoryComponent_Mantis_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDropInventoryComponent_Mantis.DinoDropInventoryComponent_Mantis_C
// 0x0000 (0x0570 - 0x0570)
class UDinoDropInventoryComponent_Mantis_C : public UDinoDropInventoryComponent_BP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDropInventoryComponent_Mantis.DinoDropInventoryComponent_Mantis_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDropInventoryComponent_Mantis(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
