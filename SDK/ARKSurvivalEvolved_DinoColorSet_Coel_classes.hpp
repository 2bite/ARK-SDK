#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Coel_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoColorSet_Coel.DinoColorSet_Coel_C
// 0x0000 (0x0268 - 0x0268)
class UDinoColorSet_Coel_C : public UPrimalColorSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoColorSet_Coel.DinoColorSet_Coel_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoColorSet_Coel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
