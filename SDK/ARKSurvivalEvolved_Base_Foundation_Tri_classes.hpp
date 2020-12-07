#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Base_Foundation_Tri_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Base_Foundation_Tri.Base_Foundation_Tri_C
// 0x0002 (0x0AD2 - 0x0AD0)
class ABase_Foundation_Tri_C : public AFloor_Base_SM_C
{
public:
	bool                                               IsGlass;                                                  // 0x0AD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisableFoundationStacking;                                // 0x0AD1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_Foundation_Tri.Base_Foundation_Tri_C");
		return ptr;
	}


	bool IsValidSnapPointTo(class APrimalStructure** childStructure, int* MySnapPointToIndex);
	void UserConstructionScript();
	void ExecuteUbergraph_Base_Foundation_Tri(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
