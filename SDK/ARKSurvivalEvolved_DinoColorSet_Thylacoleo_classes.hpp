#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Thylacoleo_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoColorSet_Thylacoleo.DinoColorSet_Thylacoleo_C
// 0x0000 (0x0268 - 0x0268)
class UDinoColorSet_Thylacoleo_C : public UPrimalColorSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoColorSet_Thylacoleo.DinoColorSet_Thylacoleo_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoColorSet_Thylacoleo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
