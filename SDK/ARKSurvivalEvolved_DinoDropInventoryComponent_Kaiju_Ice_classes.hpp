#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDropInventoryComponent_Kaiju_Ice_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDropInventoryComponent_Kaiju_Ice.DinoDropInventoryComponent_Kaiju_Ice_C
// 0x0000 (0x0570 - 0x0570)
class UDinoDropInventoryComponent_Kaiju_Ice_C : public UDinoDropInventoryComponent_Kaiju_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDropInventoryComponent_Kaiju_Ice.DinoDropInventoryComponent_Kaiju_Ice_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDropInventoryComponent_Kaiju_Ice(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
