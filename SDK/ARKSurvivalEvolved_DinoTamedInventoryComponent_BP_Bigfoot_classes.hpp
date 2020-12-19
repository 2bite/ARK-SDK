#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_BP_Bigfoot_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_BP_Bigfoot.DinoTamedInventoryComponent_BP_Bigfoot_C
// 0x0000 (0x0570 - 0x0570)
class UDinoTamedInventoryComponent_BP_Bigfoot_C : public UDinoTamedInventoryComponent_BP_NoSaddle_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_BP_Bigfoot.DinoTamedInventoryComponent_BP_Bigfoot_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoTamedInventoryComponent_BP_Bigfoot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
