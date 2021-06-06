#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Spindles_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_Spindles.DinoEntry_Spindles_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_Spindles_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_Spindles.DinoEntry_Spindles_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_Spindles(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
