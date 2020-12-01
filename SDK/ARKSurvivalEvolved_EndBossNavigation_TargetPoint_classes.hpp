#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBossNavigation_TargetPoint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EndBossNavigation_TargetPoint.EndBossNavigation_TargetPoint_C
// 0x0028 (0x0478 - 0x0450)
class AEndBossNavigation_TargetPoint_C : public ATargetPoint
{
public:
	bool                                               forceSelectNextPoint;                                     // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0451(0x0007) MISSED OFFSET
	TArray<class AActor*>                              onlyAllowAccessFromPoints;                                // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class AActor*>                              forbidAccessFromPoints;                                   // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EndBossNavigation_TargetPoint.EndBossNavigation_TargetPoint_C");
		return ptr;
	}


	void CanAccessFromPoint(class AActor* fromPoint, bool* canAccessFrom);
	void UserConstructionScript();
	void ExecuteUbergraph_EndBossNavigation_TargetPoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
