#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMelee_Slam_Exosuit_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateMelee_Slam_Exosuit.DinoAttackStateMelee_Slam_Exosuit_C
// 0x000D (0x009D - 0x0090)
class UDinoAttackStateMelee_Slam_Exosuit_C : public UDinoAttackStateMelee_C
{
public:
	struct FVector                                     SwingSocketOffset;                                        // 0x0090(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFirstTick;                                               // 0x009C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateMelee_Slam_Exosuit.DinoAttackStateMelee_Slam_Exosuit_C");
		return ptr;
	}


	void StartAnimationStateEvent(struct FName* CustomEventName, TEnumAsByte<ENetRole>* Role);
	void STATIC_BPGetSocketLocation(struct FName* SocketName, struct FVector* SocketLocation);
	void ExecuteUbergraph_DinoAttackStateMelee_Slam_Exosuit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
