#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_MoleRat_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoColorSet_MoleRat.DinoColorSet_MoleRat_C
// 0x0000 (0x0268 - 0x0268)
class UDinoColorSet_MoleRat_C : public UPrimalColorSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoColorSet_MoleRat.DinoColorSet_MoleRat_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoColorSet_MoleRat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
