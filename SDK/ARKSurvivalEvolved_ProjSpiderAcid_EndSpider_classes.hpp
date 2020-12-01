#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjSpiderAcid_EndSpider_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjSpiderAcid_EndSpider.ProjSpiderAcid_EndSpider_C
// 0x0008 (0x0650 - 0x0648)
class AProjSpiderAcid_EndSpider_C : public APrimalProjectileSpiderAcid
{
public:
	class UChildActorComponent*                        ChildProjectile;                                          // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjSpiderAcid_EndSpider.ProjSpiderAcid_EndSpider_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjSpiderAcid_EndSpider(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
