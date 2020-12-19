#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Kentro_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_Kentro.DinoEntry_Kentro_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_Kentro_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_Kentro.DinoEntry_Kentro_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_Kentro(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
