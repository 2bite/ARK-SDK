#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_LeedsWhiteWhale_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoColorSet_LeedsWhiteWhale.DinoColorSet_LeedsWhiteWhale_C
// 0x0000 (0x0268 - 0x0268)
class UDinoColorSet_LeedsWhiteWhale_C : public UPrimalColorSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoColorSet_LeedsWhiteWhale.DinoColorSet_LeedsWhiteWhale_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoColorSet_LeedsWhiteWhale(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
