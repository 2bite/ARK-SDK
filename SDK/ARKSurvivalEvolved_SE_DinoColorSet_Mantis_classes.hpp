#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SE_DinoColorSet_Mantis_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SE_DinoColorSet_Mantis.SE_DinoColorSet_Mantis_C
// 0x0000 (0x0268 - 0x0268)
class USE_DinoColorSet_Mantis_C : public UPrimalColorSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SE_DinoColorSet_Mantis.SE_DinoColorSet_Mantis_C");
		return ptr;
	}


	void ExecuteUbergraph_SE_DinoColorSet_Mantis(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
