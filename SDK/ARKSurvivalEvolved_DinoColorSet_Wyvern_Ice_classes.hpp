#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Wyvern_Ice_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoColorSet_Wyvern_Ice.DinoColorSet_Wyvern_Ice_C
// 0x0000 (0x0268 - 0x0268)
class UDinoColorSet_Wyvern_Ice_C : public UPrimalColorSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoColorSet_Wyvern_Ice.DinoColorSet_Wyvern_Ice_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoColorSet_Wyvern_Ice(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
