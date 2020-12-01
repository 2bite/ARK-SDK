#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoInventory_GachaClausDigestion_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoInventory_GachaClausDigestion.DinoInventory_GachaClausDigestion_C
// 0x0000 (0x0538 - 0x0538)
class UDinoInventory_GachaClausDigestion_C : public UDinoInventory_GachaDigestion_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoInventory_GachaClausDigestion.DinoInventory_GachaClausDigestion_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoInventory_GachaClausDigestion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
