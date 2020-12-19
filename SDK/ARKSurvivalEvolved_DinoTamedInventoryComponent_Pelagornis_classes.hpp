#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Pelagornis_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_Pelagornis.DinoTamedInventoryComponent_Pelagornis_C
// 0x0000 (0x0570 - 0x0570)
class UDinoTamedInventoryComponent_Pelagornis_C : public UDinoTamedInventoryComponent_Ptero_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Pelagornis.DinoTamedInventoryComponent_Pelagornis_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoTamedInventoryComponent_Pelagornis(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
