#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDropInventoryComponent_Kaiju_Forest_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDropInventoryComponent_Kaiju_Forest.DinoDropInventoryComponent_Kaiju_Forest_C
// 0x0000 (0x0570 - 0x0570)
class UDinoDropInventoryComponent_Kaiju_Forest_C : public UDinoDropInventoryComponent_Kaiju_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDropInventoryComponent_Kaiju_Forest.DinoDropInventoryComponent_Kaiju_Forest_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDropInventoryComponent_Kaiju_Forest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
