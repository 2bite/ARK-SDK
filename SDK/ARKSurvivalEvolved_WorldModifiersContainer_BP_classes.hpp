#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WorldModifiersContainer_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WorldModifiersContainer_BP.WorldModifiersContainer_BP_C
// 0x0000 (0x0038 - 0x0038)
class UWorldModifiersContainer_BP_C : public UWorldModifiersContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WorldModifiersContainer_BP.WorldModifiersContainer_BP_C");
		return ptr;
	}


	void ExecuteUbergraph_WorldModifiersContainer_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
