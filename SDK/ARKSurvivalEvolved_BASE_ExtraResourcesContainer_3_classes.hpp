#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BASE_ExtraResourcesContainer_3_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BASE_ExtraResourcesContainer_3.BASE_ExtraResourcesContainer_2_C
// 0x0030 (0x0058 - 0x0028)
class UBASE_ExtraResourcesContainer_2_C : public UObject
{
public:
	TArray<class UObject*>                             ResourceReferences;                                       // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UObject*>                             ExtraResourceReferences;                                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UObject*>                             ExtraDinoClasses;                                         // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BASE_ExtraResourcesContainer_3.BASE_ExtraResourcesContainer_2_C");
		return ptr;
	}


	void ExecuteUbergraph_BASE_ExtraResourcesContainer_3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
