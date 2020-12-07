#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TekShirt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_TekShirt.EngramEntry_TekShirt_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_TekShirt_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_TekShirt.EngramEntry_TekShirt_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_TekShirt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
