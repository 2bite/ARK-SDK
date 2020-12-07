#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ChalicoProj_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ChalicoProj_Base.ChalicoProj_Base_C
// 0x0004 (0x0664 - 0x0660)
class AChalicoProj_Base_C : public AShooterProjectile
{
public:
	float                                              notAChalicoDamage;                                        // 0x0660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ChalicoProj_Base.ChalicoProj_Base_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnExplode(struct FHitResult* Result);
	void UserConstructionScript();
	void ExecuteUbergraph_ChalicoProj_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
