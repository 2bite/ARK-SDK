#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Ptero_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_Ptero.DinoEntry_Ptero_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_Ptero_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_Ptero.DinoEntry_Ptero_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_Ptero(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
