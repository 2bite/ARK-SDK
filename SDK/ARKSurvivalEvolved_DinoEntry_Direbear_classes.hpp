#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Direbear_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_Direbear.DinoEntry_Direbear_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_Direbear_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_Direbear.DinoEntry_Direbear_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_Direbear(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
