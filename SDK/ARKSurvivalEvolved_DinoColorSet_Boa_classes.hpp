#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Boa_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoColorSet_Boa.DinoColorSet_Boa_C
// 0x0000 (0x0268 - 0x0268)
class UDinoColorSet_Boa_C : public UPrimalColorSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoColorSet_Boa.DinoColorSet_Boa_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoColorSet_Boa(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
