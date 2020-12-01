#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FeedingTroughBaseBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FeedingTroughBaseBP.FeedingTroughBaseBP_C
// 0x0008 (0x0DE8 - 0x0DE0)
class AFeedingTroughBaseBP_C : public APrimalStructureItemContainer_VisualItems
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0DE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FeedingTroughBaseBP.FeedingTroughBaseBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_FeedingTroughBaseBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
