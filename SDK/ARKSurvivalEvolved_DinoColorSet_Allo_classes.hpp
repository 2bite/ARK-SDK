#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Allo_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoColorSet_Allo.DinoColorSet_Allo_C
// 0x0000 (0x0268 - 0x0268)
class UDinoColorSet_Allo_C : public UPrimalColorSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoColorSet_Allo.DinoColorSet_Allo_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoColorSet_Allo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
