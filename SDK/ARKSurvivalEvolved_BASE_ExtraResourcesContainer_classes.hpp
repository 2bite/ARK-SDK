#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BASE_ExtraResourcesContainer_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BASE_ExtraResourcesContainer.BASE_ExtraResourcesContainer_C
// 0x0030 (0x0058 - 0x0028)
class UBASE_ExtraResourcesContainer_C : public UObject
{
public:
	TArray<class UObject*>                             ResourceReferences;                                       // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UObject*>                             ExtraResourceReferences;                                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UObject*>                             ExtraDinoClasses;                                         // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BASE_ExtraResourcesContainer.BASE_ExtraResourcesContainer_C");
		return ptr;
	}


	void ExecuteUbergraph_BASE_ExtraResourcesContainer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
