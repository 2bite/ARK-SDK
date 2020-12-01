#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Argent_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_Argent.DinoTamedInventoryComponent_Argent_C
// 0x0000 (0x0570 - 0x0570)
class UDinoTamedInventoryComponent_Argent_C : public UDinoTamedInventoryComponent_SmithyCapable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Argent.DinoTamedInventoryComponent_Argent_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoTamedInventoryComponent_Argent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
