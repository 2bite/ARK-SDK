#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Owl_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoColorSet_Owl.DinoColorSet_Owl_C
// 0x0000 (0x0268 - 0x0268)
class UDinoColorSet_Owl_C : public UPrimalColorSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoColorSet_Owl.DinoColorSet_Owl_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoColorSet_Owl(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
