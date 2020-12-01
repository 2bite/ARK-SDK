#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Diplocaulus_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_Diplocaulus.DinoTamedInventoryComponent_Diplocaulus_C
// 0x0000 (0x0570 - 0x0570)
class UDinoTamedInventoryComponent_Diplocaulus_C : public UDinoTamedInventoryComponent_BP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Diplocaulus.DinoTamedInventoryComponent_Diplocaulus_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoTamedInventoryComponent_Diplocaulus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
