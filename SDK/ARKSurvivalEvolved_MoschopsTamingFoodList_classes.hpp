#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MoschopsTamingFoodList_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MoschopsTamingFoodList.MoschopsTamingFoodList_C
// 0x0010 (0x0038 - 0x0028)
class UMoschopsTamingFoodList_C : public UObject
{
public:
	TArray<class UClass*>                              TamingFoodsList;                                          // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MoschopsTamingFoodList.MoschopsTamingFoodList_C");
		return ptr;
	}


	void ExecuteUbergraph_MoschopsTamingFoodList(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
