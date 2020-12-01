#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Kairuku_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_Kairuku.DinoEntry_Kairuku_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_Kairuku_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_Kairuku.DinoEntry_Kairuku_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_Kairuku(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
