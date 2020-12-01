#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Iguanadon_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoColorSet_Iguanadon.DinoColorSet_Iguanadon_C
// 0x0000 (0x0268 - 0x0268)
class UDinoColorSet_Iguanadon_C : public UPrimalColorSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoColorSet_Iguanadon.DinoColorSet_Iguanadon_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoColorSet_Iguanadon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
