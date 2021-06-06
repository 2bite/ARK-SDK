#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Eel_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_Eel.DinoEntry_Eel_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_Eel_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_Eel.DinoEntry_Eel_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_Eel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
