#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Narcotic_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_Narcotic.EngramEntry_Narcotic_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_Narcotic_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_Narcotic.EngramEntry_Narcotic_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_Narcotic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
