#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Megalania_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Megalania_Character_BP.Megalania_Character_BP_C
// 0x0058 (0x2FE8 - 0x2F90)
class AMegalania_Character_BP_C : public ADino_Character_BP_Climber_C
{
public:
	class UDinoCharacterStatusComponent_BP_Megalania_C* DinoCharacterStatus_BP_Megalania_C1;                      // 0x2F90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RequiredNormalDotToClimb_AverageTrace;                    // 0x2F98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x2F9C(0x0004) MISSED OFFSET
	class UParticleSystem*                             Ref_FootstepFX_Seeking;                                   // 0x2FA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxAiTraceForSpawnPointCount;                             // 0x2FA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x2FAC(0x0004) MISSED OFFSET
	TArray<float>                                      AiSpawnTrace_DirArray_Yaw;                                // 0x2FB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      AiSpawnTrace_DirArray_Pitch;                              // 0x2FC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              AiSpawnTrace_Distance;                                    // 0x2FD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AiSpawnTraceDownForGroundDistance;                        // 0x2FD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   CurrClimbingBlendspacesAxes_Front;                        // 0x2FD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RequiredClearRadiusForClimberSpawn;                       // 0x2FE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x2FE4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Megalania_Character_BP.Megalania_Character_BP_C");
		return ptr;
	}


	void ClimbingIK_SetNewBlendspaceAxes();
	void GetClimbingIK_BlendspaceAxes_Front(struct FVector2D* axes);
	void GetCustomSurfaceTraceDistance(int* TraceIndex, float* customDistance);
	void IsNormalClimbable(struct FVector* Normal, bool* isAverageNormal, bool* Result);
	void Check_For_Prevent_Stop_Climbing(int* numValidHits, int* numTraces, TArray<bool>* traceHitsArray, bool* AllowClimbing);
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	bool BlueprintCanRiderAttack(int* AttackIndex);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Megalania_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
