#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_CaveWolf_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_CaveWolf.DinoTamedInventoryComponent_CaveWolf_C
// 0x0000 (0x0570 - 0x0570)
class UDinoTamedInventoryComponent_CaveWolf_C : public UPrimalInventoryComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_CaveWolf.DinoTamedInventoryComponent_CaveWolf_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoTamedInventoryComponent_CaveWolf(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
