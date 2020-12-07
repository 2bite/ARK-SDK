#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Angler_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_Angler.DinoEntry_Angler_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_Angler_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_Angler.DinoEntry_Angler_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_Angler(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
