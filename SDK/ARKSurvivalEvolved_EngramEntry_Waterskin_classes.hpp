#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Waterskin_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_Waterskin.EngramEntry_Waterskin_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_Waterskin_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_Waterskin.EngramEntry_Waterskin_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_Waterskin(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
