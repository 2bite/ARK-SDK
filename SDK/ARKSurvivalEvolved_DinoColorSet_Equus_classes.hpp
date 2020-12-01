#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Equus_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoColorSet_Equus.DinoColorSet_Equus_C
// 0x0000 (0x0268 - 0x0268)
class UDinoColorSet_Equus_C : public UPrimalColorSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoColorSet_Equus.DinoColorSet_Equus_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoColorSet_Equus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
