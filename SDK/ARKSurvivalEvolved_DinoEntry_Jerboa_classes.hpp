#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Jerboa_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_Jerboa.DinoEntry_Jerboa_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_Jerboa_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_Jerboa.DinoEntry_Jerboa_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_Jerboa(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
