#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_SeaMine_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_SeaMine.EngramEntry_SeaMine_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_SeaMine_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_SeaMine.EngramEntry_SeaMine_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_SeaMine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
