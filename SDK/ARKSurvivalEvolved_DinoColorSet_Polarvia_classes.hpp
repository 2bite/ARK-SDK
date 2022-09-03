#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Polarvia_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoColorSet_Polarvia.DinoColorSet_Polarvia_C
// 0x0000 (0x0268 - 0x0268)
class UDinoColorSet_Polarvia_C : public UPrimalColorSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoColorSet_Polarvia.DinoColorSet_Polarvia_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoColorSet_Polarvia(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
