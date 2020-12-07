#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Beaver_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_Beaver.DinoTamedInventoryComponent_Beaver_C
// 0x0000 (0x0570 - 0x0570)
class UDinoTamedInventoryComponent_Beaver_C : public UDinoTamedInventoryComponent_SmithyCapable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Beaver.DinoTamedInventoryComponent_Beaver_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoTamedInventoryComponent_Beaver(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
