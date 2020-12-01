#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Quetz_Bionic_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoColorSet_Quetz_Bionic.DinoColorSet_Quetz_Bionic_C
// 0x0000 (0x0268 - 0x0268)
class UDinoColorSet_Quetz_Bionic_C : public UPrimalColorSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoColorSet_Quetz_Bionic.DinoColorSet_Quetz_Bionic_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoColorSet_Quetz_Bionic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
