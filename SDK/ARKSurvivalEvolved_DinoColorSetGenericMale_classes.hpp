#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSetGenericMale_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoColorSetGenericMale.DinoColorSetGenericMale_C
// 0x0000 (0x0268 - 0x0268)
class UDinoColorSetGenericMale_C : public UPrimalColorSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoColorSetGenericMale.DinoColorSetGenericMale_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoColorSetGenericMale(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
