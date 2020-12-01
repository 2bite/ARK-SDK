#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjSpiderAcid_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjSpiderAcid.ProjSpiderAcid_C
// 0x0008 (0x0660 - 0x0658)
class AProjSpiderAcid_C : public APrimalProjectileSpiderAcid
{
public:
	class UChildActorComponent*                        ChildProjectile;                                          // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjSpiderAcid.ProjSpiderAcid_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjSpiderAcid(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
