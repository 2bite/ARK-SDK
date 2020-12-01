#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Boa_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_Boa.DinoEntry_Boa_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_Boa_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_Boa.DinoEntry_Boa_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_Boa(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
