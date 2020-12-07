#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjMekSiegeCannon_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjMekSiegeCannon.ProjMekSiegeCannon_C
// 0x0090 (0x06F0 - 0x0660)
class AProjMekSiegeCannon_C : public AShooterProjectile
{
public:
	float                                              MaxStructureImpactDistance;                               // 0x0660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x0664(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x0665(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0666(0x0002) MISSED OFFSET
	struct FHitResult                                  K2Node_Event_Result;                                      // 0x0668(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjMekSiegeCannon.ProjMekSiegeCannon_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnExplode(struct FHitResult* Result);
	void ExecuteUbergraph_ProjMekSiegeCannon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
