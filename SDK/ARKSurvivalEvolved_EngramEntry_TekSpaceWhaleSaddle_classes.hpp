#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TekSpaceWhaleSaddle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_TekSpaceWhaleSaddle.EngramEntry_TekSpaceWhaleSaddle_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_TekSpaceWhaleSaddle_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_TekSpaceWhaleSaddle.EngramEntry_TekSpaceWhaleSaddle_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_TekSpaceWhaleSaddle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif