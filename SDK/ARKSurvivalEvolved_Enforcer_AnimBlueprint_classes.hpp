#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Enforcer_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C
// 0x0004 (0x2C24 - 0x2C20)
class UEnforcer_AnimBlueprint_C : public UDinoBlueprintBase_Climber_C
{
public:
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x2C20(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C");
		return ptr;
	}


	void IsDinoRunning(class ADino_Character_BP_Climber_C** Dino, bool* Running);
	void GetStrafeBlendspacePlayRate(float* forwardVelocity, float* rightVelocity, struct FVector2D* BlendspaceInputs, float* BlendspacePlayRate);
	void ShouldPlayClimbRunAnim(bool* PlayClimbRun);
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_Enforcer_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
