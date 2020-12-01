#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Yeti_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoColorSet_Yeti.DinoColorSet_Yeti_C
// 0x0000 (0x0268 - 0x0268)
class UDinoColorSet_Yeti_C : public UPrimalColorSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoColorSet_Yeti.DinoColorSet_Yeti_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoColorSet_Yeti(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
