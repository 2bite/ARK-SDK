#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Trike_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoColorSet_Trike.DinoColorSet_Trike_C
// 0x0000 (0x0268 - 0x0268)
class UDinoColorSet_Trike_C : public UPrimalColorSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoColorSet_Trike.DinoColorSet_Trike_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoColorSet_Trike(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
