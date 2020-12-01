#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Titano_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoColorSet_Titano.DinoColorSet_Titano_C
// 0x0000 (0x0268 - 0x0268)
class UDinoColorSet_Titano_C : public UPrimalColorSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoColorSet_Titano.DinoColorSet_Titano_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoColorSet_Titano(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
