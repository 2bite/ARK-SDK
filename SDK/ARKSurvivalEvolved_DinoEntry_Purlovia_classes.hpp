#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Purlovia_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_Purlovia.DinoEntry_Purlovia_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_Purlovia_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_Purlovia.DinoEntry_Purlovia_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_Purlovia(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
