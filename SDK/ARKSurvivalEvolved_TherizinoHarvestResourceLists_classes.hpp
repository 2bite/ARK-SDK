#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TherizinoHarvestResourceLists_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TherizinoHarvestResourceLists.TherizinoHarvestResourceLists_C
// 0x0030 (0x0058 - 0x0028)
class UTherizinoHarvestResourceLists_C : public UObject
{
public:
	TArray<class UClass*>                              HarvestComponentExclusions;                               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              BiteHarvestResources;                                     // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              ResourcesToIgnore;                                        // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TherizinoHarvestResourceLists.TherizinoHarvestResourceLists_C");
		return ptr;
	}


	void ExecuteUbergraph_TherizinoHarvestResourceLists(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
