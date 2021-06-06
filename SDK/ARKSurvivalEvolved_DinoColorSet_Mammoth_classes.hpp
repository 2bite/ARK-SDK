#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Mammoth_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoColorSet_Mammoth.DinoColorSet_Mammoth_C
// 0x0000 (0x0268 - 0x0268)
class UDinoColorSet_Mammoth_C : public UPrimalColorSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoColorSet_Mammoth.DinoColorSet_Mammoth_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoColorSet_Mammoth(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
