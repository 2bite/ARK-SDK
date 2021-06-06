#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Carno_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoColorSet_Carno.DinoColorSet_Carno_C
// 0x0000 (0x0268 - 0x0268)
class UDinoColorSet_Carno_C : public UPrimalColorSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoColorSet_Carno.DinoColorSet_Carno_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoColorSet_Carno(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
